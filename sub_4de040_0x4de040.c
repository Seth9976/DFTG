// 函数名称: sub_4de040
// 虚拟地址: 0x4de040
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_4de040()
{
    // 第一条实际指令: int32_t* eax = sub_498440(0x260)
    int32_t* eax = sub_498440(0x260)
    eax[3] += 1
    int32_t* edi = *eax
    
    if (edi == 0)
        sub_4982d0(eax)
        edi = *eax
    
    *eax = *edi
    _memset(edi, 0, 0x260)
    data_114ec70 = edi
    int32_t* eax_2 = sub_498440(0x54)
    eax_2[3] += 1
    int32_t* esi_1 = *eax_2
    
    if (esi_1 == 0)
        sub_4982d0(eax_2)
        esi_1 = *eax_2
    
    *eax_2 = *esi_1
    _memset(esi_1, 0, 0x54)
    esi_1[0x11] = 0
    esi_1[0x12] = 0
    data_114e814 = esi_1
    int32_t* eax_4 = sub_498440(1)
    eax_4[3] += 1
    int32_t* ecx_3 = *eax_4
    
    if (ecx_3 == 0)
        sub_4982d0(eax_4)
        ecx_3 = *eax_4
    
    int32_t eax_5 = *ecx_3
    *eax_4 = eax_5
    *ecx_3 = 0
    bool cond:0 = data_6c9dac != 0
    data_1150ee0 = ecx_3
    
    if (cond:0)
        sub_489550(eax_5, &data_5b2591, "mpBlock == NULL", "d:\ax\trunk\ax2017\engine\dataarray.h", 
            0xce, "DataArray<struct MaterialCacheItem>::DataArrayInitialize")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    data_6c9dac = sub_4c2e40(0x78800)
    data_6c9db4 = 0x80
    data_6c9dc4 = "materialcache"
    data_6c9dc0 = 0xda3c
    _memset(&data_aca1f8, 0, 0x38)
    _memset(&data_aca234, 0, 0x108)
    _memset(0xaca43c, 0, 0x88)
    _memset(0xaca504, 0, 0xf8)
    _memset(&data_aca60c, 0, 0x6841e0)
    void* ecx_5 = data_114ec70
    data_aca230 = 0xff00ff00
    data_114e7ec = 5
    __builtin_memset(&data_114e7f0, 0, 0x14)
    int128_t xmm0 = data_5d2464
    __builtin_memcpy(&data_aca4c4, 
        "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x"
    "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00"
    "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
        0x40)
    __builtin_memcpy(&data_aca33c, 
        "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x"
    "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00"
    "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00"
    "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
    "00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
    "00\x00\x80\x3f\x"
    "
        0x100)
    data_aca5fc = xmm0
    *(ecx_5 + 0x98) = 0xff0000ff
    __builtin_memcpy(ecx_5 + 0xa4, 
        "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x"
    "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00"
    "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
        0x40)
    *(ecx_5 + 0x9c) = 1
    *(ecx_5 + 0x24c) = 0
    return 0xff0000ff
}
