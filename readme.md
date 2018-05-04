# OOP的神奇 CAD

## 目标

本项目是一个功能简单的CAD，需要支持以下功能：  
（详细的列表放在文件尾部，当完工的时候就请在前面加一个标记（或者加粗什么的））  

- 绘制像素和几何图案
- 对几何图案进行修改
- 擦除素和几何图案
- 保存绘制结果（为自定义格式或者传统图像格式）
- 撤销（Undo）或者恢复（Redo）操作

其中，__几何图形__是指简单多边形或者椭圆形，暂时不支持其他图形。

## 细节

- 像素绘制可以参考简单的画图工具（如MSPaint）。
- 几何图形绘制方式有待商榷。
- 被填充的几何图形视为边与内容的整体。未被填充的几何图形只考虑边。
- 图片有深度（但是摄像机是正交的不考虑透视只考虑遮挡）。没有图层的概念。

__待补充__

## 类结构

在简要分析了我们的任务之后，基本划定类结构如下。  
还没有确定类的接口。__可以再作讨论__。

### IFigure

几何图形虚基类。所有的几何图形派生自它。

### Polygon

多边形类。派生IFigure。

### Ellipse

椭圆类。派生IFigure。

### IOperation

操作虚基类。所有的操作派生自它。这个类存在的意义是为了实现撤销堆栈。

### Stroke

笔画类。当使用像素绘画功能将会产生一个笔画对象。  
存储这一比所画下的所有像素的位置。

### Alter

修改。这里指的是操作几何图形。  
操作椭圆和操作多边形应该并不太一样。似乎第一次开会的时候并没有讨论清楚。__可以再作讨论__。

### Imgae

整个图像视作一个Image。

### Renderer

渲染器，把画好的东西显示出来。相当于就是OpenGL接口。

### Loader

读写器。用来保存文件或者加载文件。

## 进度

以加粗表示已经完成项，以星号\*表示还未确定具体计划，需要讨论的项。  
在讨论完成之后，就将\*号标注的内容展开为各个子任务，例如实现类展开为各个类的类名。

### 开始

- __初始化Repo和ReadMe__
- 配置图形处理库环境（推荐OpenGL + OpenCV）
- 在Windows下建工程

### 开发

- 设计类结构
- *实现类

### 测试

- *完成测试
