// 函数名称: sub_546f00
// 虚拟地址: 0x546f00
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

long double __fastcallsub_546f00(int32_t arg1)
{
    // 第一条实际指令: void* const __return_addr_1 = __return_addr
    void* const __return_addr_1 = __return_addr
    data_1151aec = 1
    _memset(&data_1151af0, 0, 0x9c)
    data_1151b18 = _mm_unpacklo_ps(zx.o(0), 0)
    data_1151b20 = 0
    data_1151b0c.q = _mm_unpacklo_ps(zx.o(0), 0x41000000)
    data_1151b14 = 0x40800000
    sub_5984f0()
    data_1151b24 = _mm_cvtpd_ps(zx.o(fconvert.d(fconvert.t(-4.0)))) ^ (data_60cca0.o).d
    sub_5984f0()
    int32_t xmm0_5 = _mm_cvtpd_ps(zx.o(fconvert.d(fconvert.t(4.0))))
    data_1151b48 = arg1
    data_1151b28 = xmm0_5 ^ (data_60cca0.o).d
    data_1151b84 = data_620d84
    return fconvert.t(-8.0)
}
