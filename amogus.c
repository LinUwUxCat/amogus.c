P(x){putchar(x);}o=255;i=0;j,k,d
,w,c;main(_,v)char**v;{w=4*atoi(
v[1]);d=w*15;c=d+54;char h[54]={
66,77,c&o,c>>8&o,c>>16&o,c>>24&o
,0,0,0,0,54,0,0,0,40,0,0,0,w&o,w
>>8&o,w>>16&o,w>>24&o,5,0,0,0,1,
0,24,0,0,0,0,0,d&o,d>>8&o,d>>16&
o,d>>24&o,19,11,0,0,19,11};for(;
i<54;i++)P(h[i]);float f[]={0,1,
0,1,0,1,1,1,.7,1,1,1,.7,1,.5,.5,
0,1,1,1};for(i=0;i<20;i+=4)for(j
=0;j<w/4;j++)for(k=0;k<4;k++){c=
f[i+k]*o;P(c);P(c);P(c);}}