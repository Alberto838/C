#include <stdio.h>

struct node {
    int i;
    struct node* next;
};

void add(struct node* list, int liczba) {
    while (list->next != NULL)
        list = list->next;
    list->next = malloc(sizeof list);
    list = list->next;
    list->i = liczba;
    list->next = NULL;
}

int fun(struct node list1, struct node list2) {
    float sr1, sr2;
    int n1, n2;
    sr1 = sr2 = 0.0;
    n1 = n2 = 0;

    while (list1.next != NULL) {
        sr1 += list1.i;
        list1 = *list1.next;
        n1++;
    }
    sr1 += list1.i;
    n1++;

    while (list2.next != NULL) {
        sr2 += list2.i;
        list2 = *list2.next;
        n2++;
    }
    sr2 += list2.i;
    n2++;

    sr1 = sr1 / n1;
    sr2 = sr2 / n2;

    if (sr1 == sr2)
        return 1;
    else return 0;
}


int main()
{
    struct node list1 = { 0, NULL };
    struct node list2 = { 1, NULL };

    add(&list1, 2);
    add(&list1, 3);
    add(&list1, 5);

    add(&list2, 2);
    add(&list2, 3);
    add(&list2, 4);

    printf("%d\n", fun(list1, list2));
    return 0;
}
