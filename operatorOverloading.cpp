#include<iostream>
#include<string>
using namespace std;

struct YouTubeChannel
{
    string Name;
    int SubscriberCount;

    YouTubeChannel(string name, int subscriberCount ){
        Name=name;
        SubscriberCount=subscriberCount;
    }
};
void operator<<(ostream& COUT, YouTubeChannel& ytchannel)




int main()
{

YouTubeChannel yt1 = YouTubeChannel("CodeBeauty", 75000);
cout<< yt1;


return 0;
}