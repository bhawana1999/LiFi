function macFrame = MACwrap(IPPacket)
    FrameVersion = [0 0];
    Reserved = [0 0 0 0];
    FrameType = [0 0 1];
    SecurityEnabled = 0;
    FramePending = 0;
    AckRequest = 0;
    DestinationAddMode = [1 0];
    SourceAddMode = [1 0];
    SequenceNumber = [0 0 0 0 0 0 0 0];
    DestinationVPANid = [1 1 1 1 1 1 1 1 0 0 0 0 0 0 0 0];
    DestinationAdd = [0 0 0 0 1 1 1 1 0 0 0 0 1 1 1 1];
    SourceVPANid = [1 1 1 1 0 0 0 0 1 1 1 1 0 0 0 0];
    SourceAdd = [0 0 0 0 0 0 0 0 1 1 1 1 1 1 1 1];
    AuxSecurityHeader = [0 0 0 0 0 0 0 0];
    %FramePayload = IPPacket;
    FrameControl = [FrameVersion,Reserved,FrameType,SecurityEnabled,...
        FramePending,AckRequest,DestinationAddMode,SourceAddMode];
    AddressingField = [DestinationVPANid,DestinationAdd,SourceVPANid,SourceAdd];
    MACHeader = [FrameControl,SequenceNumber,AddressingField,AuxSecurityHeader];
    HeaderPlusPayload = [MACHeader,IPPacket];
   
    CRC_Object = comm.CRCGenerator('z^16 + z^15 + z^2 + 1');
    macFrame = step(CRC_Object,HeaderPlusPayload');
    macFrame = macFrame';