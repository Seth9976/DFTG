// 函数名称: sub_4e8170
// 虚拟地址: 0x4e8170
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_4e8170()
{
    // 第一条实际指令: if (data_114e7d9 != 0)
    if (data_114e7d9 != 0)
        int32_t eax
        sub_489550(eax, &data_5b2591, "!gDraw3DData.submittingRenderItems", 
            "d:\ax\trunk\ax2017\engine\vr.cpp", 0x190, "VRDraw")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    (*(*data_114ec78 + 0xa4))(0)
    void* esi = data_114e818
    
    if (esi != 0)
        esi = *(esi + 0x1c) u>> 0xe & 1
    
    if ((*(*data_1150db8 + 0x18))() != 0)
        data_1150eb8 = 1
        sub_4e7670()
        (*(*data_114ec78 + 0x94))()
        sub_4e7940(0, esi)
        sub_4e7a80()
        
        if (esi != 1)
            sub_4e7940(1, esi)
            sub_4e7a80()
        
        int32_t* ecx_3 = data_114ec78
        data_1150eb8 = 0
        (*(*ecx_3 + 0x98))()
    
    (*(*data_114ec78 + 0xa8))(0)
    (*(*data_114ec78 + 0xa4))(1)
    int32_t var_c
    int32_t var_8
    int32_t edx_3
    
    if (*(data_aca1ec + 0x1c) == 0 || data_115107f == 0)
        int32_t eax_12 = data_1150ddc
        edx_3 = *data_1150db8
        
        if (esi != 1)
            var_8 = *((eax_12 << 2) + &data_1150dc8)
            var_c = *((eax_12 << 2) + &data_1150dc4)
        else
            int32_t eax_13 = *((eax_12 << 2) + &data_1150dc4)
            var_8 = eax_13
            var_c = eax_13
    else
        int32_t eax_10 = data_1150ddc
        edx_3 = *data_1150db8
        
        if (esi != 1)
            var_8 = *((eax_10 << 2) + &data_1150dc0)
            var_c = *((eax_10 << 2) + &data_1150dbc)
        else
            int32_t eax_11 = *((eax_10 << 2) + &data_1150dbc)
            var_8 = eax_11
            var_c = eax_11
    
    (*(edx_3 + 0x1c))(&data_1150e20, var_c, var_8)
    (*(*data_114ec78 + 0xa8))(1)
    int32_t eax_16 = data_1150ddc + 1
    
    if (eax_16 == 1)
        eax_16 = 0
    
    data_1150ddc = eax_16
    return sub_4f5710(0) __tailcall
}
