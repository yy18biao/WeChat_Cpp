#include "sessionfriendlist.h"

SessionFriendList::SessionFriendList(QWidget *parent)
    : QScrollArea{parent}
{
    ///// 设置部件属性
    // 开启滚动效果
    this->setWidgetResizable(true);
    // 滚动条样式
    this->verticalScrollBar()->setStyleSheet("QScrollBar:vertical { width: 2px; background-color: rgb(184, 182, 180); }");
    this->horizontalScrollBar()->setStyleSheet("QScrollBar:horizontal { height: 0px; }");
    // 设置内部的主要部件
    mainWidget = new QWidget();
    mainWidget->setFixedWidth(250);
    this->setWidget(mainWidget);

    ///// 设置存放内容组件的属性
    // 设置垂直布局
    QVBoxLayout* layout = new QVBoxLayout();
    // 设置元素之间的间隔为0
    layout->setSpacing(0);
    // 设置布局里面的元素距离四个边界的间距都为0
    layout->setContentsMargins(0, 0, 0, 0);
    // 设置所有元素靠顶部对齐
    layout->setAlignment(Qt::AlignTop);
    // 添加布局到组件
    mainWidget->setLayout(layout);

    for (int var = 0; var < 50; ++var) {
        QPushButton *bt = new QPushButton();
        bt->setText("按钮");
        layout->addWidget(bt);
    }
}
