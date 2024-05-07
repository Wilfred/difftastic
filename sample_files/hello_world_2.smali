.class public LHelloPerson;

#Ye olde hello world application
#To assemble and run this on a phone or emulator:
#
#java -jar smali.jar a -o classes.dex HelloWorld.smali
#zip HelloWorld.zip classes.dex
#adb push HelloWorld.zip /data/local
#adb shell dalvikvm -cp /data/local/HelloWorld.zip HelloWorld
#
#if you get out of memory type errors when running smali.jar, try
#java -Xmx512m -jar smali.jar HelloWorld.smali
#instead

.super Ljava/lang/Object;

.method public static main([Ljava/lang/String;)V
    .registers 3
    
    sget-object v0, Ljava/lang/System;->out:Ljava/io/PrintStream;
    
    const-string	v1, "Hello %s!"
    
    const-string	v2, "Evan"
    
    invoke-virtual {v0, v1, v2}, Ljava/io/PrintStream;->printf(Ljava/lang/String;Ljava/lang/String;)V
    
    return-void
.end method
