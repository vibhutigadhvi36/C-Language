    #include<iostream>
#include<string>
using namespace std;

class LibraryItem
{
private:
    string title;
    string author;
    string dueDate;

public:
    void setTitle(string t){ title=t; }
    void setAuthor(string a){ author=a; }
    void setDueDate(string d){ dueDate=d; }

    string getTitle(){ return title; }
    string getAuthor(){ return author; }
    string getDueDate(){ return dueDate; }

    virtual void checkOut()=0;
    virtual void returnItem()=0;
    virtual void displayDetails()=0;

    virtual ~LibraryItem(){}
};

class Book: public LibraryItem
{
    int pages;
    bool issued;
public:
    Book(){ pages=0; issued=false; }

    void setPages(int p)
    {
        if(p<0) throw "Invalid pages";
        pages=p;
    }

    void checkOut()
    {
        if(issued) cout<<"Already issued\n";
        else
        {
            issued=true;
            cout<<"Book checked out\n";
        }
    }

    void returnItem()
    {
        if(!issued) cout<<"Book not issued\n";
        else
        {
            issued=false;
            cout<<"Book returned\n";
        }
    }

    void displayDetails()
    {
        cout<<"Book : "<<getTitle()<<" "<<getAuthor()<<" "<<getDueDate()<<" Pages:"<<pages<<endl;
    }
};

class DVD: public LibraryItem
{
    int duration;
    bool issued;
public:
    DVD(){ duration=0; issued=false; }

    void setDuration(int d)
    {
        if(d<0) throw "Invalid duration";
        duration=d;
    }

    void checkOut()
    {
        if(issued) cout<<"DVD already issued\n";
        else
        {
            issued=true;
            cout<<"DVD checked out\n";
        }
    }

    void returnItem()
    {
        if(!issued) cout<<"DVD not issued\n";
        else
        {
            issued=false;
            cout<<"DVD returned\n";
        }
    }

    void displayDetails()
    {
        cout<<"DVD : "<<getTitle()<<" "<<getAuthor()<<" "<<getDueDate()<<" Duration:"<<duration<<endl;
    }
};

class Magazine: public LibraryItem
{
    int issueNo;
    bool issued;
public:
    Magazine(){ issueNo=0; issued=false; }

    void setIssue(int i)
    {
        if(i<0) throw "Invalid issue";
        issueNo=i;
    }

    void checkOut()
    {
        if(issued) cout<<"Magazine already issued\n";
        else
        {
            issued=true;
            cout<<"Magazine checked out\n";
        }
    }

    void returnItem()
    {
        if(!issued) cout<<"Magazine not issued\n";
        else
        {
            issued=false;
            cout<<"Magazine returned\n";
        }
    }

    void displayDetails()
    {
        cout<<"Magazine : "<<getTitle()<<" "<<getAuthor()<<" "<<getDueDate()<<" Issue:"<<issueNo<<endl;
    }
};

int main()
{
    const int MAX_ITEMS=10;
    LibraryItem* items[MAX_ITEMS];
    int count=0;

    int choice;

    do
    {
        cout<<"\n1 Add Book\n2 Add DVD\n3 Add Magazine\n4 Show Items\n5 Checkout\n6 Return\n7 Exit\n";
        cin>>choice;

        if(choice==1)
        {
            if(count>=MAX_ITEMS) continue;
            Book* b=new Book();

            string t,a,d;
            int p;

            cout<<"Title:"; cin>>t;
            cout<<"Author:"; cin>>a;
            cout<<"DueDate:"; cin>>d;
            cout<<"Pages:"; cin>>p;

            try{
                b->setPages(p);
            }
            catch(...){
                cout<<"Error in pages\n";
            }

            b->setTitle(t);
            b->setAuthor(a);
            b->setDueDate(d);

            items[count]=b;
            count++;
        }

        else if(choice==2)
        {
            if(count>=MAX_ITEMS) continue;
            DVD* dv=new DVD();

            string t,a,d;
            int dur;

            cout<<"Title:"; cin>>t;
            cout<<"Author:"; cin>>a;
            cout<<"DueDate:"; cin>>d;
            cout<<"Duration:"; cin>>dur;

            try{
                dv->setDuration(dur);
            }
            catch(...){
                cout<<"Invalid duration\n";
            }

            dv->setTitle(t);
            dv->setAuthor(a);
            dv->setDueDate(d);

            items[count]=dv;
            count++;
        }

        else if(choice==3)
        {
            if(count>=MAX_ITEMS) continue;
            Magazine* m=new Magazine();

            string t,a,d;
            int issue;

            cout<<"Title:"; cin>>t;
            cout<<"Author:"; cin>>a;
            cout<<"DueDate:"; cin>>d;
            cout<<"IssueNo:"; cin>>issue;

            try{
                m->setIssue(issue);
            }
            catch(...){
                cout<<"Invalid issue\n";
            }

            m->setTitle(t);
            m->setAuthor(a);
            m->setDueDate(d);

            items[count]=m;
            count++;
        }

        else if(choice==4)
        {
            for(int i=0;i<count;i++)
                items[i]->displayDetails();
        }

        else if(choice==5)
        {
            int id;
            cout<<"Item index:"; cin>>id;
            if(id<count) items[id]->checkOut();
        }

        else if(choice==6)
        {
            int id;
            cout<<"Item index:"; cin>>id;
            if(id<count) items[id]->returnItem();
        }

    }while(choice!=7);

    for(int i=0;i<count;i++)
        delete items[i];

    return 0;
}