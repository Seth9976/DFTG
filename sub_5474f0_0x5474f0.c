// 函数名称: sub_5474f0
// 虚拟地址: 0x5474f0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_5474f0(int32_t* arg1)
{
    // 第一条实际指令: sub_5473b0()
    sub_5473b0()
    int32_t eax = DragAcceptFiles(data_1150b8c, 1)
    data_1151b90 = arg1
    data_1152b94 = 0
    
    if (arg1[1] != 0x20)
        sub_489550(eax, &data_5b2591, "ptr->assetType == ASSET_TYPE_FAB", 
            "d:\ax\trunk\ax2017\engine\fabdef.cpp", 0xea, "FabDefGet")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t eax_2 = *(sub_4981f0(arg1) + 8)
    data_11d2fb4 = data_63c264
    data_11d2fa0 = eax_2
    int128_t xmm0_1 = data_63c274
    data_11d2fac = 0x3e19999a
    data_11d2fb0 = 0x43480000
    data_11d2fc4 = xmm0_1
    int32_t xmm0_2 = sub_41e120(0.52359879f)
    void* eax_3 = data_aca1ec
    data_11d2fa4 = xmm0_2
    data_11d2fa8 = _mm_cvtepi32_ps(zx.o(*(eax_3 + 0x18))) / _mm_cvtepi32_ps(zx.o(*(eax_3 + 0x14)))
    data_11d2fdc = (*sub_4eea70())[0x133]
    uint32_t (* eax_6)[0x4]
    char* ecx_1
    eax_6, ecx_1 = sub_4eea70()
    ecx_1.b = 0
    data_11d2fe4 = (*eax_6)[0x133]
    return sub_54d840(ecx_1) __tailcall
}
