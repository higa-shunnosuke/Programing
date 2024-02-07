#pragma once

#include "../Utility/Vector2D.h"

class Enemy
{
	int type;			//�^�C�v
	float speed;		//����
	int image;			//�摜
	Vector2D location;	//�ʒu���
	Vector2D box_size;	//�����蔻��̑傫��

public:
	Enemy(int type, int handle);
	~Enemy();

	void Initialize();	//��������
	void Update(float speed);		//�X�V����
	void Draw()const;		//�`�揈��
	void Finalize();	//�I������

public:
	void SetActive(bool flg);		//�L���t���O�ݒ�
	void DecreaseHp(float value);	//�̗͌�������
	Vector2D GetLocation() const;	//�ʒu���W�擾
	Vector2D GetBoxSize() const;	//�����蔻��̑傫���擾

	int GetType() const;			//�^�C�v�擾
	Vector2D GetLocation() const;	//�ʒu���̎擾
	Vector2D GetBoxSize() const;	//�����蔻��̑傫�����擾
};

