P(x){putchar(x);}M(x){P(x);P(x);P(x);}typedef int
I;I main(I argc,char**argv){I w=4*atoi(argv[1]);I
d=w*15;I c=d+54;char h[]={0x42,0x4D,c&255,c>>8&255
,c>>16&255,c>>24&255,0,0,0,0,54,0,0,0,40,0,0,0,w&
255,w>>8&255,w>>16&255,w>>24&255,5,0,0,0,1,0,24,0
,0,0,0,0,d&255,d>>8&255,d>>16&255,d>>24&255,19,11
,0,0,19,11,0,0,0,0,0,0,0,0,0,0};for(I i=0;i<54;i++
)P(h[i]);float f[]={0,1,0,1,0,1,1,1,.7,1,1,1,.7,1
,.5,.5,0,1,1,1};for(I i=0;i<20;i+=4)for(I j=0;j<w
/4;j++)for(I k=0;k<4;k++)M((I)(f[i+k]*255));}