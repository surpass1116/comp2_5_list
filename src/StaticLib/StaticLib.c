#define WIN32_LEAN_AND_MEAN             // Windows ヘッダーからほとんど使用されていない部分を除外する
#include "Windows.h"                    // Windows API の機能定義

#include "../include/lib_func.h"


// ノードを初期化
void initialize_node(node* p, int val)
{
	p->pNext = NULL;
	p->data = val;
}

// リストを初期化
void initialize_list(list* l)
{
	l->header = NULL;
}


// 先頭にデータを追加
void push_front(list* l, node* p)
{
	// ToDo: ここにコードを追加

	if (l->header != NULL) {
		p->pNext = l->header;
	}
	l->header = p;
}

// pの次のノードを削除
void remove_next(list* l, node* p)
{
	// ToDo: ここにコードを追加

	if (p->pNext != NULL) {


		node* n;
		n = p->pNext;

		p->pNext = n->pNext;
	}

}


// pの次のノードを取得
node* get_next(list* l, node* p)
{
	if (!p) return NULL;
	return p->pNext;

	return NULL;
}
