# 第0章-问答Q&A

### 1. ".\\"的意义

**为什么第一个任务中，执行程序的时候要写".\mission_0.1.exe"？其中".\\"这个部分究竟是什么意思？**

这个问题其实原文中有提及，".\\"表示当前所在目录，但是我觉得这一句话确实也讲得不太够。

&nbsp;

#### 现象上理解

".\\"就是为了简写而存在的。

我们看一个例子，下图中有切换目录的操作。

<img src=".\引用图片\023.png" style="float:left;" width="800px;" />

由于前面的路径部分指“当前所在的目录”，所以说，".\\"在第一句命令中是指"C:\Users"。所以第一个语句的完整且等价的形式就是 cd C:\Users\Public，也就是切换后面这个参数所指目录中。执行后，第二个语句前面的路径反馈也符合我们的预期。

你可以试着直接打出完整的路径，效果是一样的。

<img src=".\引用图片\024.png" style="float:left;" width="800px;" />

&nbsp;

#### 绝对引用和相对引用

前者这种使用".\\"表示当前目录的写法，叫做**相对引用**。

后者这种输入对应的完整路径，叫做**绝对引用**。

严格意义上讲，所有的运行程序或者切换目录，都需要你指定一个明确的路径，而不管是绝对引用还是相对引用，所指的路径都是一样的。

&nbsp;

例如说，下图就是几种不同的写法，一个是绝对引用，剩下的都是相对引用，都是指向的同一个文件。

<img src=".\引用图片\025.png" style="float:left;" width="800px;" />

<img src=".\引用图片\026.png" style="float:left;" width="800px;" />

<img src=".\引用图片\027.png" style="float:left;" width="800px;" />

当然得说，两者区别并不大，知道".\\"表示当前目录就可以了。

&nbsp;

> ℹ：信息
>
> 在Linux的命令行下，所有命令都需要严格指定路径。而Windows早期命令行cmd中为了方便，在执行程序或者切换目录的时候不需要指定路径，可以直接书写名称。
>
> 而PowerShell的目的是让两边的人都用得惯，所以说PowerShell中，切换目录，以及作为其他程序输入时的参数，接受直接书写名称。但是出于一些安全原因，PowerShell在执行程序的时候不接受书写名称。
>
> 下面这张表举例说明了这些混乱的的关系。
>
> ```powershell
> cd C:\Users\Public   标准绝对引用  cmd接受   PowerShell接受    Linux bash接受
> cd .\Public\         标准相对引用  cmd接受   PowerShell接受    Linux bash接受
> cd Public            书写名称引用  cmd接受   PowerShell接受    Linux bash不接受
> cd .\mission_0.1.exe 路径执行程序  cmd接受   PowerShell接受    Linux bash接受
> cd mission_0.1.exe   名称执行程序  cmd接受   PowerShell不接受  Linux bash不接受
> ```
>
> &nbsp;
>
> 为了适合所有的情况，最好的方法就是按照最严的情况进行书写：即每一个地方都指定路径而非书写名称。

&nbsp;

### 2. ".\\"和"./"的区别

**原文中出现了".\\"和"./"两种写法，且我也发现了两种写法都是可以的，有什么区别吗？**

<img src=".\引用图片\028.jpeg" style="float:left;" width="800px;" />

&nbsp;

这也涉及到了刚才一模一样的系统差异问题，我们可以看到，在Windows系统中，我们用\来分割路径，而Linux系统中，则用/来分割路径。

<img src=".\引用图片\028.png" style="float:left;" width="800px;" />

(Linux bash)

<img src=".\引用图片\029.png" style="float:left;" width="800px;" />

(PowerShell)

&nbsp;

因此作为搅和稀泥的PowerShell，两个写法都要接受，正斜线反斜线都行（其实PowerShell这种和稀泥的行为主要是因为大量的开发人员都在使用Linux，要是PowerShell还要因为这种差异设置障碍的话，就会被抛弃了）。甚至现在的cmd也是两种写法都接受了。而Linux bash则只接受自己的方式。

这个差异其实也就是一点点书写的区别而已，就和开车靠左还是靠右一样。