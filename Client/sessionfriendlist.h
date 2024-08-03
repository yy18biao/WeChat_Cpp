#ifndef SESSIONFRIENDLIST_H
#define SESSIONFRIENDLIST_H

#include <QWidget>
#include <QScrollArea>
#include <QScrollBar>
#include <QVBoxLayout>
#include <QPushButton>

class SessionFriendList : public QScrollArea // 继承滚动组件
{
    Q_OBJECT

private:
    QWidget* mainWidget; // 存放内容的整体组件

public:
    explicit SessionFriendList(QWidget *parent = nullptr);

signals:
};

#endif // SESSIONFRIENDLIST_H
