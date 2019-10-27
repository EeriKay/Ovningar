struct person {
  char name[20]; /*Gör till dynamiskt? */
  struct person *v, *h;
}; /*Personen längst ner i trädet */

void newparents(struct person *);

void createfamilytree(struct person *);

void skrivalla(struct person *);
