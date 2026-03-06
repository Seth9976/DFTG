// 函数名称: sub_4bec00
// 虚拟地址: 0x4bec00
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_4bec00(int32_t* arg1)
{
    // 第一条实际指令: int32_t eax_11 = data_114e814
    int32_t eax_11 = data_114e814
    
    if (*(eax_11 + 0x1c) == 0)
        sub_489550(eax_11, &data_5b2591, "gpSpriteAppData->materialBound", 
            "d:\ax\trunk\ax2017\engine\sprite.cpp", 0x5c, "SpritePutMaterialInCache")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t* eax = sub_498440(0xf08)
    eax[3] += 1
    void* var_18
    int32_t* esi
    
    if (eax[4] != 0xffffffff)
        esi = *eax
        
        if (esi == 0)
            sub_4982d0(eax)
            esi = *eax
        
        int32_t var_10_1 = 0xf04
        *eax = *esi
        int32_t var_14_1 = 0
        var_18 = &esi[1]
    else
        esi = sub_4c2e40(0xf08)
        int32_t var_10 = 0xf04
        int32_t var_14 = 0
        var_18 = &esi[1]
    
    _memset(var_18, 0, 0xf04)
    *esi = arg1
    sub_4efa00(&esi[1], arg1)
    void* edi_1 = data_114e814
    int32_t* eax_4 = sub_498440(0xc)
    eax_4[3] += 1
    int32_t* ecx_3 = *eax_4
    
    if (ecx_3 == 0)
        sub_4982d0(eax_4)
        ecx_3 = *eax_4
    
    *eax_4 = *ecx_3
    ecx_3[2] = 0
    *ecx_3 = esi
    ecx_3[1] = 0
    ecx_3[2] = *(edi_1 + 0x44)
    void* eax_7 = *(edi_1 + 0x44)
    
    if (eax_7 == 0)
        *(edi_1 + 0x48) += 1
        *(edi_1 + 0x40) = ecx_3
        *(edi_1 + 0x44) = ecx_3
        return &esi[1]
    
    *(eax_7 + 4) = ecx_3
    *(edi_1 + 0x48) += 1
    *(edi_1 + 0x44) = ecx_3
    return &esi[1]
}
