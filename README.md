Please scroll down for English Version 

# 欢迎！

恭喜你，找到了一个可以通过另一个思路学习C的地方！这一份教程力图使用简明易懂的语言，讲解C语言编程的奥义。

这一篇文章非常适合：

1. 之前从来没有接触过编程，但是想要自学C的人。
2. 上C语言的课程觉得不怎么听得懂，总觉得老师讲的“太过零碎”“抓不住重点”，希望真正透彻理解C语言的人。

&nbsp;

为什么市面上所说的大多“适合新手入门”的计算机语言书对于新手仍然晦涩难懂呢？或者说，即使确实适合新手，你是否有一种看了很多但是知识仍然不过脑子的感受呢？这些都是正常的，并不是因为这些作者防止你过来抢饭碗，于是故意设置难度来劝退你（笑）

<p align="center">
  <img src=".\引用图片\001.jpg" width="600" />
</p>

(中文翻译版本确实没有找到更加清晰的图片了……)

主要问题在于，这些作者假设的“初学者们”关于计算机的知识储备量，是高于一个日常使用计算机的人所拥有的知识量的。正如你会开汽车，并不意味着你打开引擎盖就能够讲解每一个部件的名字和作用，结果你拿着一本“30天内拼装汽车”开始死磕，必定只会磕的头破血流。而且，这些知识是至关重要的。如果你不了解它，注定会很快地碰到墙壁，即使一时间记住了用法也会很快忘记掉。

所以这一份教程将会再努力放低入门门槛，力图做到每一个会用计算机的人都能够通过这一份教程做到C语言入门，能够写出自己的程序（当然，仅仅是入门而已）。而且学完这本教材会让你对于计算机本身有着更多的了解。

另外，第0章关于命令行的介绍，仅仅覆盖了Windows 10系统的使用者。因为截图很多，而且对于过程的讲解很细致，所以也没有精力去做关于其他系统的介绍，还请谅解。

## 1.你现在需要知道的

1.1 阅读的一些原则：

如果你出现了读不懂的情况，请后退到你读得懂的地方，一行一行往下读。

如果你真的一时半会儿读不懂，就不要纠结了，跳过吧。之后有缘再会。

&nbsp;

1.2 这个网站的界面的介绍：

这里是**GitHub**，如果你之前没有接触过这里，你可以大概理解为一个在线分享文件（尤其是代码）的地方。页面上面的那些文件夹都可以点进去，里面对应的是每一个章节，也就是对应的一个主题。

<img src=".\引用图片\002.png" style="float:left;" width="800" />

&nbsp;

> ℹ 首次出现：**粗体**
>
> 如果我使用了**粗体**标注某个关键词，例如上面的**GitHub**，意味着我之后会再次用到它。计算机理论中常常出现关键概念的嵌套。如果你在阅读某一个地方的时候，发现不太理解，八成是因为其中的某个关键词卡住了。
>
> 因此，我会在行文中将有可能卡住你的关键词用粗体标记出来，并且对应地，在它第一次出现的位置也标上粗体。如果你发现确实是因为这个关键词的原因读不懂，就向前去找它的定义。我希望这样能够有效地提高你对于复杂概念的理解能力。
>
> 当然了，这并不意味着这个关键词会被处处加上黑体，否则排版很乱。

&nbsp;

> ℹ 首次出现：首次出现
>
> 如果说我使用了一种新的约定或者排版，而且我希望你能够理解他的含义，我会在后面加上 “首次出现：xxx” 这种格式的字样，来提醒你这种的意义。
>
> 例如说，刚才，出现了第一个粗体“**GitHub**”，而粗体是一种我的文档里面，还没有出现过的约定或者排版。我希望你能够明白，黑体意味着重复出现的关键词，因此我写了个“首次出现：粗体”，来让你了解粗体排版的含义。

&nbsp;

1.3 文件夹的结构的介绍：

点击进入每个章节的文件夹里面，有一种文件的后缀名是".md"，我们将其简称为**md文件**。它是一种可以自动排版的文档，而且可以直接在GitHub上在线阅读，因此很便于你直接在GitHub上学习。

每当你进入一个新章节的时候，你就会看到这样一个文档——点开它就行了，它就是你进入学习章节需要阅读的东西。

如果有人找我的一些提问很有价值，我也会将其内容收藏到同一个文件夹中。如果有什么疑问，先去那里看看，没有找到的话也可以向我提出。

<img src=".\引用图片\003.png" style="float:left;" width="800" />

&nbsp;

同时，每一个章节会有一个**任务文件夹**。每个章节的**md文件**，也就是介绍文档中，会布置一些辅助或者加深你的理解的任务。任务所需要的各种材料都会在这个**任务文件夹**之中。

需要记住：上机操作在计算机学习中是一个非常重要的辅助理解的手段，请不要随意跳过。大部分任务难度都不大，标记”(选做)“的任务可能略微需要你努力一些。当然，我出的任务都是围绕介绍文档来的，并不存在超纲问题，因此我希望你能够全部完成。

&nbsp;

如果是编程任务，里面会有一个带有介绍的空白**源代码**(下图中的mission_0.0.c)，里面基本上是空的，或者是残缺的。总之，他就是你的任务目标了，你需要完成它。同一个文件夹中还会附有：一份**范例程序**；一份正确但不一定最优的**源代码答案**(下图中的mission_0.0_reference.c)，即参考答案。

如果你不太读得懂要求，建议你不要先去看**源代码答案**，而是去运行**范例程序**(下图中的mission_0.0_reference_program.exe)，然后考虑如何去实现。

<img src=".\引用图片\004.png" style="float:left;" width="800" />

&nbsp;

> ⚠ 有限的介绍
>
> 这里出现的词语**源代码**，**程序**都是没有较为严格的定义的，而且如果你是完全新手，你也不能够透彻理解他们两者之间的关系。当然，这里只是给你介绍一下我的文件夹结构，还用不着让理解他们。
>
> 关于**源代码**，**程序**的定义和关系，我会在后面“第1章-C语言预备知识”中比较详细的介绍。

&nbsp;

> ℹ 首次出现：有限的介绍
>
> 很多时候，如果在一个知识点上太过深入，阅读起来会感到十分痛苦。而且很多时候，深入了解一个知识点需要其他相关知识的辅助。
>
> 因此作为一种教学习惯，一个知识点可能会被讲很多次，每次只讲一些。但是，这样的重复介绍会破坏整个文章的结构紧凑度，会让某些人（例如我）感到痛苦。
>
> 因此，我使用”有限的介绍“这种标签表示，这里的介绍并不够完整，甚至有可能并不完全正确。希望你能够记住这一点，在之后的重新学习的中不要忘记他们。同时，我希望通过这样的标注方式让文章变得更有条理。

&nbsp;

"引用图片"这个文件夹不需要关注。他是MD文件应用的图片的来源。

上面就是一些你需要了解的东西了！了解了这些，你就可以从第0章开始学习了。放轻松，只要你会浏览网页或者打字这种基本的电脑操作，你就能够读懂他们。

如果你读不懂上面引用文字（即前面有竖杠，字体略微变灰的部分），也不用在意，他们都是可以用直觉感受到的东西，多见几次你就明白了，不用太过担忧。

&nbsp;

## 2.其他的话

一个人写的文章，肯定会出现各种各样的问题。如能斧正，不尽感激。

&nbsp;

&nbsp;

# Welcome！

Congratulations! You find a place where you can learn C through another idea! This tutorial tries to use a concise and easy way to explain the C programming.

This article is especially suitable for you:

1. Someone who wants to learn C by himself/herself, but have no idea about programming.
2. Someone who gets very little in teacher/professor's C language course, and is seeking for a tutorial about C language which is easy to understand.

&nbsp;

Why are most of the computer language books with "suitable for beginners" still difficult to understand? Do you have a feeling that you have read a lot but then forget the most of it after a few days? That's a actually a problem for all beginners in programming.

<p align="center">
  <img src=".\引用图片\007.png" width="600" />
</p>

The problem is, these authors assume that you already have a great amount of knowledge about computers, which is far more that what a person could get by just using Word, Powerpoint and Excel. Just like having a driving lincese doesn't mean that you can explain the name and function of each component in the car. Let alone reading a book like "Making a car within 30 days" .

Moreover, those knowledge will make your study more fluent.

That's what I am trying to do - to write a programming tutorial that can be understand by everyone who use computer. And trying to introduce basic knowledge about computers.

In addition, the introduction of command line in Chapter 0 only covers Windows 10 system. Because there are a lot of screenshots, and the explanation is extremely detailed, so I don't have time to make the introduction for other systems. Sorry for that.

&nbsp;

## 1. What you need to know now

1.1 Some suggestions for reading this tutorial 

If you have trouble reading, please go back to the place where you can understand and read it line by line.

If you really don't understand it for a while, don't worry about it and skip it. You can read it later. Maybe a few hours later, or a few week later. It is all on you.

&nbsp;

1.2 Instructions to the interface of GitHub:

This is **GitHub**. If you haven't used it before, you can just understand it as a place to share files (especially code). You can click into the folders above. Each Chapter has a one specific theme.

<img src=".\引用图片\005.png" style="float:left;" width="800" />

&nbsp;

> ℹ First appearance: **Bold**
>
> If I mark a keyword with **bold**, such as **GitHub** above, it means I will use it again in the future. The professional terms usually nests with each other and thats why it is difficult to understand. 
>
> Therefore, I will boldly mark the words that is possible to make you confused in the text, and correspondingly mark the position where it first appears. If you find that you are still not so farmiliar with this word, go back and find its definition. I hope this can effectively improve your understanding of complex concepts.
>
> Of course, this does not mean that the keyword will be boldly marked everywhere, otherwise the layout will be messy.

&nbsp;

> ℹ First appearance: First appearance
>
> If I use a new convention, and I hope you can understand why do I use it, I will add the words "First appearance: xxx" after it to explain it.
>
> For example, just now, the first bold "**GitHub**" appeared, and the bold is a convention for terms or keyword that appear more than once. So I wrote a "first appearance" after it to explain why do I use bold here.

&nbsp;

Introduction to the structure of the folder:

There is a file like "xxx.md". "md" stands for "Markdown". **Markdown file(following MD file)** is a document that doesn't require writer to care too much about font size and font style. More Importantly, it can be directly read on the website of GitHub. When you enter the folder of each Chapter, you will see a **MD file** like this. This is what you need to read if you want to start this chapter.

If there are some good questions about the text, I will also collect them in a seperate MD file in the same folder. If you have questions, go and check there first. Then ask me if the existing Q&A does't  answer your doubt.

<img src=".\引用图片\006.png" style="float:left;" width="800" />

&nbsp;

At the same time, each chapter will have a "**mission folder**". The the introduction of each chapter(**the MD file in each folder**) will assign some tasks to deepen your understanding of the introduction.

Remember: Practise by yourself is a very important way to learn. Most tasks are not difficult, only tasks with "optional" may take a bit more effort. Of course, all missions are based on the introduction, so I hope you can complete them all.

&nbsp;

If it is a programming task, there will be a blank or incomplete **source code** (mission_0.0.c) with a brief introduction. That what you need to complete. The same folder will also include: a copy of **sample program**; a correct but not necessarily optimal **reference answer **(mission_0.0_reference.c).

If you don't understand the requirements well, I suggest that you should run the **sample program** (mission_0.0_reference_program.exe) and consider how to implement it instead of reading the answer.

<img src=".\引用图片\004.png" style="float:left;" width="800" />

&nbsp;

> ⚠ Limited explanation
>
> The keywords **source code** and **program** that appear above are not strictly defined. If you are a complete beginner, you probably don't understand the relationship between them. It is just a introduction about the folder structure, so you don't need to understand right now.
>
> Definition and relationship of **source code** and **program** is in "Chapter 1-Preliminary Knowledge of C".

&nbsp;

> ℹ First appearance: Limited explanation
>
> In many cases, if an introduction talks too deep in a single topic, it will be very painful for readers. And in many cases, deep understanding of one topic requires many related knowledge.
>
> Therefore, when teaching beginners, one single topic will be taught many times, each time with just a piece. But such a introduction will indeed destroy the structure of whole article, and will make some readers (such as me) feel painful.
>
> Therefore, I will mark "Limited explanation" to tell you that this introduction is incomplete or even partly incorrect. You should remind yourself that you will learn "a better version" later. At the same time, I think this will also make the tutorial more organized.

&nbsp;

"Picture" folder serves as the source for MD file. You can just ignore it.

&nbsp;

That's what you need to know here! Now you can start "Chapter 0-Preliminary Knowledge of Computer". Be Relax.

If you can’t read the quoted text above (The part with the vertical bar and the font is slightly grayed out), never mind. You will understand it after seeing it a few more times.

&nbsp;

##  2. Other words

To English readers:

I takes time to translate. And I don't have enough time to polish every sentence in the English Version. Sorry if the are many typos and also sorry if the English Version is much later than the Chinese one.

&nbsp;

This article is written by one person in his spare time, it will definitely have many mistakes. I am very grateful if you can point those mistakes out.

 &nbsp;

------

作者 - Author: Thomas Yao

GitHub名 - GitHub username: [hypergraphUniverse](https://github.com/hypergraphUniverse)

联系作者邮箱 - Email：hypergraphUniverse@outlook.com

![](https://i.creativecommons.org/l/by-nc-sa/4.0/88x31.png)

除非另有说明或授权，本文档中的内容，包括但不限于文字以及原创图片按照[CC BY-NC-SA 4.0](https://creativecommons.org/licenses/by-nc-sa/4.0/)协议发布。请在遵守协议的情况下使用本文档，请注意下方对某些情况的法律提醒，**尤其**是在各类**自媒体平台上转发**的说明。请适当且明显地标注出处。

This work is licensed under the Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International License. To view a copy of this license, visit [http://creativecommons.org/licenses/by-nc-sa/4.0/](http://creativecommons.org/licenses/by-nc-sa/4.0/) or send a letter to Creative Commons, PO Box 1866, Mountain View, CA 94042, USA. Please indicate the source clearly and appropriately when using. 

&nbsp;

法律提醒：

CC协议对于作品的转载与使用的约束相较于传统版权较为宽松，但是您仍然需要在使用的时候严格遵守协议，充分尊重版权。下面的文字，提供了详细的解释，希望您能够阅读后注意。如果如下文本的解释与原[CC BY-NC-SA 4.0](https://creativecommons.org/licenses/by-nc-sa/4.0/)协议有出入，请以原协议解释为准。

&nbsp;

本协议允许您对于本作品进行使用以及改编，但是您需要在使用、改编、再发布的过程中遵守以下的要求：

1. **保留著名权**。您使用本作品的行为必须给出适当的**原作者署名**，以及提供指向**本许可协议的链接**，同时**标明是否**对原始作品作了**修改**。

   适当的著名包括但不限于原作者的名字，以及指向原作品的链接等。这里建议您在转载过程中，至少要加入如上的两个原作者信息。且请您务必在显著的位置上进行原作者著名。

2. **非商用**。您不得将本作品以及基于本作品的改编内容用于商用目的。

   需要注意的是，商用目的**并非仅仅意味着获得金钱**的收入，在转发到自媒体平台上时尤其需要注意，详情参见后面的注意事项。

3. **遵守同协议**。如果您再混合、转换或者基于本作品进行创作，您必须**基于与原先许可协议相同的许可协议**分发您贡献的作品。

   您可以在Common Creative官网上找到和CC BY-NC-SA 4.0相兼容的协议。

&nbsp;

您需要注意的一些事情：

1. 非商用（NC）的限制并非仅意味着直接的金钱收入，商用的含义包括了直接或者非直接获得利益。

   很明显，在没有原作者的授权下，您**不能**将作为**收费文章**转发，否则违反了本协议；如果您将本文章以免费文章的形式转发于某种形式的自媒体，其获得的**观众打赏，流量分成或者广告分成**仍然属于一种商业利益，其也是违反非商业限制的；即使您关闭掉了所有的收益功能，未从中获得任何直接的金钱利益，您仍然有利用本文章**提高您知名度**的嫌疑，其也会被视作一种商业利益。即使最终本作品未给您带来任何实际的流量，您实际上已违反了本协议。

   上述的案例尤其适用于微信、微博或者其他社交传媒平台上，以盈利或引流为目的而创立、运营的帐号。

   如果您将本作品进行**改编**，例如制作成视频，将其发布在任一平台上，您仍然面对如上相同的情况。且改编人不得不面对SA条款带来的更多约束。

   &nbsp;

2. 在和**原作者的协商和正式约定**下，您可以按照新的约定，将本作品进行使用，包括商业使用。这相当于您单独从原作者手中获得了另一份使用协议。由于CC协议是一种许可协议而非限制协议，所以两者是不冲突的。

   &nbsp;

3. **如果您违反了本协议**，那么您获得的CC**许可证书**将立即**自动终止**。按照4.0协议，您有30天的窗口期可以修复您的失误以重新使得CC许可证书生效。

   如果您手上的CC许可证书因为您违反协议的行为而失效，您对于本作品的使用则是**无授权的，是侵权行为**。按照《中华人民共和国著作权法》，您会被追究责任，会面临**撤回侵权内容、公开致歉、补偿稿费**等合法要求。需要注意的是，30天的窗口期恢复证书仅仅在少量情况发挥作用，例如我在这30天中取消了所有获得本作品的途径，您可以通过窗口期重新获得协议而不需要重新授权。在您未恢复您的失误前，您手上的CC许可证书依然是无效的，将面临被追究法律责任的风险。

   请您不要冒险，如果我发现**未授权的行为**，将会及时固定证据链，并且**从重追究**。

&nbsp;

综合1,2,3可以看出来，对于各类公众平台或自媒体的转发或者改编，都有违反本协议NC条款的风险，而这是极其容易发生的。但如果您获得了新的授权，则完全不需要产生类似的担忧，因此强烈建议您在转发的时候联系原作者获得转发的授权。

&nbsp;

我采用CC协议的一个初衷就是希望更多的人能够从中学习到知识，让知识能够更加轻松地共享出去，CC协议保障了阅读者自由使用它的权力。在此之上，我对于本作品的传播自然是欢迎的，而且我也欢迎有人能够将其改编为视频。对NC和SA条款的保留，主要是我不希望自己接近于无偿的工作被其他人直接当作获得各种利益的手段。