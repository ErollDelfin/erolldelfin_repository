int main ()
{
    int z;
    printf("Enter a number:");
    scanf("%d",&z);

    if(z %2 == 0)
        printf("%d is an even number.", z);
    else
        printf("%d is an odd number.",z);
    return 0;
}
