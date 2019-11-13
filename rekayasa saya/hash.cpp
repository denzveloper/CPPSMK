//function
void convertSHA1BinaryToCharStr(const unsigned char * const hashbin, char * const hashstr) {
  for(int i = 0; i<20; ++i)
  {
    sprintf(&hashstr[i*2], "%02X", hashbin[i]);
  }
  hashstr[40]=0;
}

//Example call.  hashbin is the 20byte hash array.
char hashstr[41];
convertSHA1BinaryToCharStr(hashbin, hashstr);
printf("%s\n", hashstr);
