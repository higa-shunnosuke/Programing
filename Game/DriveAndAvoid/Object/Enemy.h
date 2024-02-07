#pragma once

#include "../Utility/Vector2D.h"

class Enemy
{
	int type;			//タイプ
	float speed;		//速さ
	int image;			//画像
	Vector2D location;	//位置情報
	Vector2D box_size;	//当たり判定の大きさ

public:
	Enemy(int type, int handle);
	~Enemy();

	void Initialize();	//初期処理
	void Update(float speed);		//更新処理
	void Draw()const;		//描画処理
	void Finalize();	//終了処理

public:
	void SetActive(bool flg);		//有効フラグ設定
	void DecreaseHp(float value);	//体力減少処理
	Vector2D GetLocation() const;	//位置座標取得
	Vector2D GetBoxSize() const;	//当たり判定の大きさ取得

	int GetType() const;			//タイプ取得
	Vector2D GetLocation() const;	//位置情報の取得
	Vector2D GetBoxSize() const;	//当たり判定の大きさを取得
};

