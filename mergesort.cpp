void merge(int arr[],int l,int m,int r)
{
	int i1  = m-l+1;
	int i2 = r-m;
	int L[i1],R[i2];
	for(int i =0;i<i1;i++)
	{
	   L[i] = arr[l+i];
	}
	for(int j = 0;j<i2;j++)
	{
	   R[j] = arr[m+1+j];
	}
	int x = 0; // First array starting iterator
	int y = 0; // Second array starting iterator
	int z = l; // Merged array starting iterator
	while(x < i1 && y < i2)
	{
		if(L[x] <= R[y])
		{
		  arr[z] = L[x];
		  x++;
		}
		else
		{
		  arr[z] = R[y];
		  y++;
		}
		z++;		
	}
	while(x < i1)
	{
	  arr[z] = L[x];
	  x++;
	  z++;
	}
	while(j < i2)
	{
	   arr[z] = R[y];
	   y++;
	   z++;
	}	
}
void mergesort(int arr[],int l,int r)
{
	if(l < r)
	{
	  int m  = l + (r - l)/2; // Here (l+r)/2 might risk overflow.
	  mergesort(arr,l,m);
	  mergesort(arr,m+1,r);
	  merge(arr,l,m,r);
	}
}
