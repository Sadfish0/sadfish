### 工厂模式

- 简单工厂

- 工厂方法

- 抽象工厂

  

当有多个物流方式的时候，使代码便于添加物流方式，便于维护代码：

![image-20220719173556117](C:\Users\Administrator\AppData\Roaming\Typora\typora-user-images\image-20220719173556117.png)

简单工厂的解决方法如下：

![image-20220719173515869](C:\Users\Administrator\AppData\Roaming\Typora\typora-user-images\image-20220719173515869.png)

工厂方法：在父类中提供创建对象的方法，允许子类决定实例化对象的类型。

![image-20220719173940289](C:\Users\Administrator\AppData\Roaming\Typora\typora-user-images\image-20220719173940289.png)

客户端知道所有运输对象都提供“交付方法”，但是不关心具体实现方式。

工厂方法的模式结构如下：

![image-20220719174211627](C:\Users\Administrator\AppData\Roaming\Typora\typora-user-images\image-20220719174211627.png)

优点是避免了创建者和具体产品之间的紧密耦合，但是增加了系统的抽象性和理解难度

抽象工厂的模式结构如下：

![image-20220719174635300](C:\Users\Administrator\AppData\Roaming\Typora\typora-user-images\image-20220719174635300.png)





Transport类有三个派生类，分别代表三种运输方式，每个类里边可以定义一些私有变量，如cost，speed等，代表这种运输方式的花费和速度。Logistics代表物流，通过调用Logistics相关派生类的方法可以获得“交付方式”,但是具体实现并不关心，因为具体实现的方法在Transport相关类中，即工厂方法模式。在抽象工厂中，具体产品包括 椅子类，沙发类，桌子类等。椅子类中包括一些描述椅子信息的成员变量，如花费，长宽高等。用户购买这些产品的时候可以指定相关信息。抽象工厂有三个派生类，包括生产艺术，现代化，维多利亚类型家具的工厂。在对应的工厂里边生产相应风格的家具。每种物流有对应的速度和花费。每种风格的家具也有对应的价格，因此在客户端的代码中可以感觉用户选择的家具以及物流确定其总的消费。