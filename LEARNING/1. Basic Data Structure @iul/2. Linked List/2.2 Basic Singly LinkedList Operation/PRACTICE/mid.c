

struct node* insertatmid(struct node* head, int data, int index) {
    struct node *midnode = (struct node*)malloc(sizeof(struct node));
    midnode->data = data;

    if (index == 0) {
        midnode->next = head;
        return midnode;
    }

    struct node *ptr = head;
    int i = 0;

    while (i < index - 1 && ptr != NULL) {
        ptr = ptr->next;
        i++;
    }

    if (ptr == NULL) {
        printf("Index out of range\n");
        free(midnode);
        return head;
    }

    midnode->next = ptr->next;
    ptr->next = midnode;

    return head;
}
