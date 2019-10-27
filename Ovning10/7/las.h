struct indata {
  char t;
  struct indata *rest;
};

struct indata *newdata(void);

struct indata *write(struct indata *);

struct indata *createchar(void);
