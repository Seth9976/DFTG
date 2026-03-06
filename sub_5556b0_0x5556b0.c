// 函数名称: sub_5556b0
// 虚拟地址: 0x5556b0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_5556b0(int32_t* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* esi = arg1
    int32_t* var_118 = esi
    _memset(0x1517030, 0, 0x30c)
    void var_114
    _memset(&var_114, 0, 0x104)
    char* ebx = esi[2]
    void* i = &var_114
    char j
    
    if (*ebx != 0)
        void var_11
        
        while (i u< &var_11)
            char* esi_1 = ebx
            
            do
                j = *esi_1
                esi_1 = &esi_1[1]
            while (j != 0)
            
            void* esi_2 = esi_1 - &esi_1[1]
            sub_579a90(i, ebx, esi_2)
            void* edi = i + esi_2
            ebx = &ebx[1] + esi_2
            *edi = 9
            i = edi + 1
            
            if (*ebx == 0)
                break
        
        esi = var_118
    
    char* edx = esi[3]
    char* ecx_1 = edx
    
    do
        j = *ecx_1
        ecx_1 = &ecx_1[1]
    while (j != 0)
    
    char* eax_2 = &data_60b51c
    
    if (ecx_1 != &ecx_1[1])
        eax_2 = edx
    
    void* edx_1 = &var_114
    char* var_11c = eax_2
    
    do
        eax_2.b = *edx_1
        edx_1 += 1
    while (eax_2.b != 0)
    
    void* esi_4 = var_118[1]
    char* ecx_3 = esi_4
    
    do
        eax_2.b = *ecx_3
        ecx_3 = &ecx_3[1]
    while (eax_2.b != 0)
    
    char* ebx_3 = *var_118
    void* const edi_2 = &data_60b51c
    
    if (ecx_3 != &ecx_3[1])
        edi_2 = esi_4
    
    char* esi_5 = ebx_3
    
    do
        eax_2.b = *esi_5
        esi_5 = &esi_5[1]
    while (eax_2.b != 0)
    
    char* var_130_2 = var_11c
    void* eax_3 = &var_114
    char* ecx_6 = &data_60b51c
    
    if (esi_5 != &esi_5[1])
        ecx_6 = ebx_3
    
    void var_113
    
    if (edx_1 - &var_113 == 0)
        eax_3 = &data_60b51c
    
    void* var_134_2 = eax_3
    void* const var_138_2 = edi_2
    char* var_13c = ecx_6
    sub_553d20(0x1517030, 0x30c, "Title: %s\r\nPath: %s\r\nFilter: %s\r\nDefault Extension: %3s")
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return 0x1517030
}
