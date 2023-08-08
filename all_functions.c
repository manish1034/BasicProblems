
// #define loop(i,a,b) for(int i = (a); i < (b); i++)
// #define inp int num;\
//             printf("enter your number ");\
//             scanf("%d", &num);
// #define print(a)    printf("%d ", (a))
//                 -------------<43>-------------
// int check_count(int n) {
//     int count = 0;
//     while(n > 0) {
//         n /= 10;
//         count++;
//     }
//     return count;
// }
// int power(int n, int p) {
//     int ans = 1;
//     for(int i = 0; i<p; i++) {
//         ans = ans * n;
//     }
//     return ans;
// }
// int check(int n) {
//     int count= check_count(n);
//     int num = n;
//     int ans = 0;
//     while(num >= 1) {
//         int rem = num % 10;
//         ans = ans + power(rem,count);
//         num /= 10;
//     }
//     if(ans == n) return 1;
//     return 0;
// }

//                 -------------<46>-------------
int fac(int n) {
    int rem=n, fact=1;
    for(int i=1; i<=rem; i++){
        fact *= i;
    }
    return fact;
}