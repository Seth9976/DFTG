// 函数名称: sub_51ad40
// 虚拟地址: 0x51ad40
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_51ad40()
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* ecx = data_aca1ec
    
    if (ecx == 0)
        goto label_51ad6c
    
    int32_t bottom = (*(*ecx + 0x34))()
    
    if (bottom.b == 0)
        ecx = data_aca1ec
    label_51ad6c:
        int32_t esi_1 = 0
        
        if (ecx != 0)
            esi_1 = ecx[7]
        
        bottom = data_1150b8c
        void** ecx_1 = &data_6cad14
        data_6cad4d = 1
        data_aca1ec = &data_6cad14
        
        if (bottom == 0)
            data_6cad28 = 0x400
            data_6cad2c = 0x300
        else
            RECT rect
            GetClientRect(bottom, &rect)
            ecx_1 = data_aca1ec
            ecx_1[5] = rect.right
            bottom = rect.bottom
            ecx_1[6] = bottom
        
        ecx_1[7] = esi_1
        ecx_1[8].b = 1
        ecx_1[1] = "Game.xpack"
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return bottom
}
