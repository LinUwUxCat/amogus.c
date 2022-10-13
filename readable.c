/* Color table */
//Color B : black. 0x000000 -> 0 on 3 bytes
//Color W : white. 0xFFFFFF -> 0xFF, 3 times
//Color L : light grey. 0xB3B3B3 -> 0xB3, 3 times   //These 2 colors are approximated later.
//Color G : grey. 0x828282 -> 0x82, 3 times.        //Purely because it's shorter.
/* Actual image data. */
/* Row and pixel array size */
//Rowsize : ceil(24*width/32)*4 //note : i don't need to actually use that. Because our image is 4*argv[1] pixels wide,
//PixelArraySize : Rowsize*5    //it will actually always be a 3*4*argv[1] bytes for a row size, thus fulfilling the multiple of 4 requirement.

/* Amongus : 
B W W W
L W G G
L W W W
B W W W
B W B W
*/

P(x){putchar(x);}
M(x){P(x);P(x);P(x);}
i=0;j;k;w;c;d;
main(int _, char** argv){
    w=4*atoi(argv[1]);
    d=w*15;
    c=d+54;
    char h[]={0x42,0x4D, //BMP magic
    c&255,c>>8&255,c>>16&255,c>>24&255, //file size (12*argv[1]*5 + header (54))
    0,0,0,0, // any bullshit
    54,0,0,0, //offset where data starts (1 byte after end of header)
    40,0,0,0, //size of BITMAPINFOHEADER
    w&255,w>>8&255,w>>16&255,w>>24&255, //Width of image
    5,0,0,0, //height of image
    1,0, //must always be 1 for whatever reason
    24,0, //color depth - bits per pixel
    0,0,0,0, //compression method - here uncompressed
    d&255,d>>8&255,d>>16&255,d>>24&255, //size of data (pixels)
    19,11,0,0,19,11,0,0, //pixels per metre (why is this important?) anyways who cares
    0,0,0,0, //colors in the palette (0 = default = 2^24, which is what we want here)
    0,0,0,0 //important colors (0 = all of em)
    }; //end of header
    for (;i<54;i++)P(h[i]);
    float f[]={0,1,0,1,0,1,1,1,.7,1,1,1,.7,1,.5,.5,0,1,1,1}; //this is our among us guy! But a bit backwards.
    for (i=0;i<20;i+=4){ //for each line
        for (j=0;j<w/4;j++){ //for each amogus
            for (k=0;k<4;k++){ //for each pixel in the line
                M((int)(f[i+k]*255)); //print each byte 3 times
            }
        }
    }
}