#ifndef QRCODEPICKER_H
#define QRCODEPICKER_H

#include "qrcodepicker_global.h"

class QRCODEPICKERSHARED_EXPORT Qrcodepicker
{
public:
    Qrcodepicker();

    // bridef:
    //     提取视频文件 videoFilePath 中前 seconds 秒内出现的二维码信息
    // parameters:
    //     videoFilePath: 视频文件绝对路径
    //     seconds: 在视频的前多少秒内提取二维码信息
    //              若为 -1 则在整个视频文件中提取
    //              若视频文件时长小于seconds，则在整个视频文件中提取
    // return:
    //     二维码信息，如果未提取到信息，则为空
    // remarks:
    //     该函数为同步函数，执行时间根据 seconds 的增长而线性增长
    QString pickQrcodeInfoFromVideo(const QString& videoFilePath, int seconds);
};

#endif // QRCODEPICKER_H
