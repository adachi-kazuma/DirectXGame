#include "Player.h"
#include"ImGuiManager.h"
#include"Vector3.h"
#include <cassert>

//������
void Player::Initialize(Model* model, uint32_t textureHandle)
{
	//NULL�|�C���^�`�F�b�N
	assert(model);

	//�����o�ϐ��Ɏ󂯎�����l����
	textureHandle = textureHandle;
	model_ = model;

	//���[���h�ϊ��̏�����
	worldTransform_.Initialize();



}


//�X�V
void Player::Update() {

}

//�`��
void Player::Draw(const ViewProjection& viewProjection) {

	//3D���f��
	model_->Draw(worldTransform_, viewProjection, textureHandle_);
}