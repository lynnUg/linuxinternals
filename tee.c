#include <sys/stat.h>
#include <fnctl.h>
#include <ctype.h>
#include  "tlpi_hdr.h"
#include <getopt.h>
int main (int argc ,char *argv[]){
  //size_t len;
  //off_t offset;
  int fd ;
  //char *buf;
  string *other;
  ssize_t numWritten;
  other="test"
  fd= open(argv[1] , O_RDWR | O_CREAT| O_APPEND | S_IRUSR | S_IWUSR | S_IRGRP 
  | SIROT | S_IWOTH); // rw-rw-rw
  while ((c = getopt (argc, argv, "a:")) != -1)
    switch (c)
      {
       case 'a':
       numWritten =write(fd , &argv[ap][1], strlen(&argv[ap][1]));
       if(numWritten ==-1)
         errExit("write")
    
        printf("%s: wrote %ld bytes \n","test", (long) numWritten);
       
      }

 
