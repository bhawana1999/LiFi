[wavdata Fs] = audioread('test.m4a');

wavbinary = dec2bin( typecast( single(wavdata(:)), 'uint8'), 8 ) - '0';
orig_size = size(wavdata);
data=reshape(wavbinary,1,length(wavbinary(:,1))*length(wavbinary(1,:)));
data=double(data);
macFrame_Tx=MACwrap(data);
IPPacket=MACunwrap(macFrame_Tx);
wavbinary_r=reshape(IPPacket,length(IPPacket)/8,8);
wavdata_1 = reshape( typecast( uint8(bin2dec( char(wavbinary_r + '0') )), 'single' ), orig_size );
soundsc(wavdata_1,Fs);
audiowrite('retest_3.m4a',wavdata_1,Fs);