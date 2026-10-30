/*
 * Copyright (C) 2023 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

extern int _ZN7android19lockImageFromBufferENS_2spINS_13GraphicBufferEEEjRKNS_4RectEiPNS_11CpuConsumer12LockedBufferE(
    void *buffer, unsigned int inUsage, const void *rect, int fenceFd, void *outputImage);

int _ZN7android19lockImageFromBufferENS_2spINS_13GraphicBufferEEEjRKNS_4RectEiPNS_11CpuConsumer12LockedBufferEb(
    void *buffer, unsigned int inUsage, const void *rect, int fenceFd, void *outputImage, int async) {
    (void)async;
    return _ZN7android19lockImageFromBufferENS_2spINS_13GraphicBufferEEEjRKNS_4RectEiPNS_11CpuConsumer12LockedBufferE(
        buffer, inUsage, rect, fenceFd, outputImage);
}

void _ZN7android18BnProducerListener16onBufferDetachedEi() {
    return;
}
