#include<iostream>
using namespace std;

const int c=50;

class list
{
    int code[c];
    float price[c];
    int count=0;

    public:
        void get_item()
        {
            cout<<"\nEnter item code:";
            cin>>code[count];
            cout<<"\nEnter Price:";
            cin>>price[count];
            count++;
        }

        void delete_item()
        {
            int num,i;
            cout<<"\nEnter the code of item you want to delete:";
            cin>>num;
            for(i=0;i<count;i++)
            {
                if(code[i]==num)
                {
                    for(int j=i; j<count-1; j++)
                    {
                        code[j]=code[j+1];
                        price[j]=price[j+1];
                    }
                    count--;
                    cout<<"\nThe purchased item is deleted.";
                    break;
                }
            }
            if(i==count)
                cout<<"\nItem not purchased.";
        }

        void sum_price()
        {
            int sum=0;
            for(int i=0; i<count; i++)
                sum+=price[i];
            cout<<"\nTotal price of your purchase is "<<sum;
        }

        void display_item()
        {
            cout<<"\nThe list of your items are as follows:";
            for(int i=0; i<count; i++)
                cout<<"\n"<<code[i]<<" "<<price[i];
            sum_price();
        }
};

int main()
{
    list item;
    int ch;
    while(1)
    {    
        cout<<"\nWelcome to the Shopping Center For the Best";
        cout<<"\n\n1.Add Item\n2.Delete Item\n3.Display Purchased Items\n4.Display Total Amount\n5.Exit";
        cout<<"\nEnter your choice:";
        cin>>ch;
        switch(ch)
        {
            case 1: item.get_item();
                    break;
            
            case 2: item.delete_item();
                    break;
            
            case 3: item.display_item();
                    break;
            
            case 4: item.sum_price();
                    break;
            
            case 5: break;
                    break;
        }
    }
    return 0;
}