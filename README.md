# amogus.c
![](https://linuxcat.tech/sep.bmp)\
This is a very small C program that is used to generate small BMP files of among us characters, like the separators in this README.\
This was made possible thanks to the very detailed [Wikipedia Page](https://en.wikipedia.org/wiki/BMP_file_format) about the BMP file format.
## Compilation
![](https://linuxcat.tech/sep.bmp)\
The compilation of this program has been tested successfully with `gcc`, `clang` and `tcc`.\
You shouldn't need any additional command-line parameters than just `yourcompiler amogus.c`. However note that you will get warnings as this relies on implicit declarations and missing type specifiers.
## Usage
![](https://linuxcat.tech/sep.bmp)\
After compiling :\
`./a.out [NUMBER] > file.bmp`\
Where NUMBER is any number and file.bmp is any file, existing or not.
## Explanation
![](https://linuxcat.tech/sep.bmp)\
Everything to understand this program should be both in the wikipedia page cited earlier and in `readable.c`, adn `amogus.c` is not quite easy to understand.\
But here's a short explanation.\
In this code, we write first the 2 headers, which have both a fixed size. The 3 variable parts in the header depend on the number the user inputs, and are related to width of the image, as well as the size of the image data and the size of the file (image data + headers).\
Then, we need to write our pixels. BMP data goes bottom to top, left to right, so we need to write our among us guys line per line, which is what the 3 for loops do.\
These pixels are simply 3 bytes, one per RGB value (example : a black pixel is 3 bytes, 00,00, and 00; a white pixel is 3 bytes, FF,FF and FF). In our case, we are only using grayscale colors, so we can just write the same byte 3 times, which saves characters in the code.\
We are not opening a file here, but writing directly to stdout using putchar, which is shorter than using files, but requires the user to redirect stdout to a file.