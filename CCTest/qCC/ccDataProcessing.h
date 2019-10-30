#pragma once
#include <QString>
#include <QByteArray>
#include <QDebug>
#include <QProgressdialog>
#include <iomanip>
#include "ccFunction.h"

//K�����㷨
LidarPointCLoudA* KNNProcess(QStringList &qsPath, int &nInterval, size_t &nVecSize, int &nChannelNum, QProgressDialog *progress);

//�ƶ�����ͳ��ֱ��ͼ�㷨
LidarPointCLoudA* HistogramFiltProcess(QStringList &qsPath, int &nVale, size_t &nVecSize, int &nChannelNum);

//�����ܶȾ����㷨
LidarPointCLoudA* mDBSCAN_filterprocessing(QStringList &qsPath, int &nVale, size_t &nVecSize, int &nChannelNum);

//��ȥ���㷨
LidarPointCLoudA* Unfilterprocessing(QStringList &qsPath, size_t &nVecSize, int &nChannelNum);

//д��Ԥ�����ļ�
int WritePreProcessingFile(QString &qsOutPath, LidarPointCLoudA* PtA, size_t &nVecSize);

//������ʱ��ŵĶ������ļ�
LidarPointCLoudA* ReadPreProcessingFile(QString &qaInPath, size_t &nFileLoop);

//��������ϵ
LidarPointCLoudA* CalBtXYZprocess(LidarPointCLoudA* &PtA, size_t &nFileLoop, double &dAngle, double &dR1, double &dR2);

//��������ϵ
int CalClXYZprocess(QString &POSpath, QString &Lidarpath, QString &PtOutpath);
