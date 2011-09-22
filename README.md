
MeeGo's ShareUI is available on Nokia's Harmattan platform, this is an example of how to use it. The critical bits to getting this working had to do with QtCreator, specifically running it on a 32bit Ubuntu machine and getting all the latest updates, especially the experimental ones, from the Updater. Note that this will NOT work on Windows or Mac OS X.

The sharing feature looks like 

http://www.developer.nokia.com/swipe/ux/pages/Sharing.html

It is akin to Intents in the Android universe in that new applications can register themselves to handle share requests.

This API is not exposed in Nokia's Harmattan QML Components, but rather in the underlying 'Platform' APIs. Here they are 

http://meego.gitorious.org/meego-sharing-framework

The following forum posts were important

http://www.developer.nokia.com/Community/Discussion/showthread.php?226370-Accessing-ShareUI-on-Harmattan-MeeGo

and

http://forum.meego.com/showthread.php?t=3768