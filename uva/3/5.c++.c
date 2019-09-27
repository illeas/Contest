int main()
{
   char oper;
   int a, b, c;

   printf("What do you want to calculate?\n");
   if (scanf("%d %1[-+/*] %d %1[-+/*] %d", &a, &oper, &b, &oper, &c) != 4)
        printf("Error. Invalid input.\n");
    else {

   switch(oper)
   {
    case '+':
        printf("%d+%d=%d",a,b,a+b);
        break;
    case '-':
        printf("%d-%d=%d",a,b,a-b);
        break;
    default:
        printf("Error! Invalid operator.");
        break;
   }}
   return 0;
}
