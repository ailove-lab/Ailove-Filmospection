void parseOptions(int argc, char** argv) {
  while ((c = getopt (argc, argv, "abc:")) != -1)
    switch (c) {
      case 'a':
        aflag = 1;
        break;
      case 'b':
        bflag = 1;
        break;
      case 'c':
        cvalue = optarg;
        break;
      case '?':
        if (optopt == 'c')
          fprintf (stderr, "Option -%c requires an argument.\n", optopt);
        else if (isprint (optopt))
          fprintf (stderr, "Unknown option `-%c'.\n", optopt);
       else
        fprintf (stderr,
                  "Unknown option character `\\x%x'.\n",
                  optopt);
        return 1;
      default:
       abort ();
}