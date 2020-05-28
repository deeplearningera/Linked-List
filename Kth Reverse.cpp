struct node *reverse (struct node *head, int k)
{
// Complete this method
struct node *prev=NULL,*q,*curr=head;
int x=k;
while(x-- && curr!=NULL)
{
q = curr->next;
curr->next = prev;
prev = curr;
curr=q;
}
if(curr!=NULL)
{
head->next = reverse(q,k);
}

return prev;

}