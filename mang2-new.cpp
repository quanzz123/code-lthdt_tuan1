#include"iostream"

using namespace std;
void tao_mang( float **&arr, int n, int m)
{
    
    for(int i=0; i<n; i++)
    {
        arr[i] = new float[m];
    }

}
void nhap_mang(float **arr, int n, int m)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout << "Nhap gia tri phan tu [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
       
    }
}
void in_mang(float **arr, int n, int m)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout << arr[i][j] << " \t";
        }
        cout << endl;
    }
}
void sum_row(float **arr, int n, int m)
{
    int sum_row[n];
    for(int i=0; i<n; i++)
    {
        int sum = 0 ;
        for(int j=0; j<m; j++)
        {
            sum += arr[i][j];
        }
        sum_row[i] = sum;
        cout << "\ntong cua hang " << i+1 << ":  " << sum << endl;
    }
}
int main()
{
    int n,m;
    cout << "\nnhap so hang: ";
    cin >> n;
    cout << "\nnhap so cot: ";
    cin >> m;
    float **arr;
    arr = new float*[n];
    tao_mang(arr,n,m);

    nhap_mang(arr,n,m);

    in_mang(arr,n,m);

    cout << "\ntong tung hang: ";
    sum_row(arr,n,m);
    
    for(int i=0; i<n; i++)
    delete arr[i];
    delete arr;
    return 0;
}