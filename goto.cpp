#include<iostream>
using namespace std;
int main()
{
    int test;
    again:
        cout<<"\n Is it 8.00am?\n\tPRESS 1 for yes\n\t 0 for no: ";
        cin>>test;
        if(test==1){
            goto dining_room;
        }
        else if(test==0){
            cout<<"\n Is it 9.00am?\n\tPRESS 1 for yes\n\t 0 for no: ";
            cin>>test;
            if(test==1){
                goto school;
            }
            else if(test==0){
                cout<<"\n Is it 1.30pm?\n\tPRESS 1 for yes\n\t 0 for no: ";
                cin>>test;
                if(test==1){
                    goto dining_room;
                }
                else if(test==0){
                    cout<<"\n Is it 5.00pm?\n\tPRESS 1 for yes\n\t 0 for no: ";
                    cin>>test;
                    if(test==1){
                        goto play_ground;
                    }
                    else if(test==0){
                        cout<<"\n Is it 6.30pm?\n\tPRESS 1 for yes\n\t 0 for no: ";
                        cin>>test;
                        if(test==1){
                            goto reading_room;
                        }
                        else if(test==0){
                            goto again;
                        }
                    }
                }
            }
        }
        school:
            cout<<"\n Shanto,you have to go to school";
            goto end;
        dining_room:
            cout<<"\n Shanto, you have to go to dining room";
            goto end;
        play_ground:
            cout<<"\n Shanto, you have to go to play ground";
            goto end;
        reading_room:
            cout<<"\n Shanto, you have to go to reading room";
            goto end;
        end:

            return 0;
}
