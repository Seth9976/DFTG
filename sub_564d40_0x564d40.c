// 函数名称: sub_564d40
// 虚拟地址: 0x564d40
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_564d40(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: arg1[0x11f9] = 0
    arg1[0x11f9] = 0
    arg1[0x11fa] = 0xffffffff
    arg1[0x11f1].b = 0xff
    
    if (sub_5634c0(arg1) == 0xd8)
        if (arg2 == 1)
            return 1
        
        uint32_t i = zx.d(sub_5634c0(arg1))
        
        if (i != 0xc0)
            while (i != 0xc1)
                if (i == 0xc2)
                    break
                
                if (sub_563e60(arg1, i) == 0)
                    return 0
                
                for (i = zx.d(sub_5634c0(arg1)); i == 0xff; i = zx.d(sub_5634c0(arg1)))
                    void* esi_1 = *arg1
                    
                    if (*(esi_1 + 0x10) == 0)
                    label_564de3:
                        
                        if (*(esi_1 + 0xa8) u>= *(esi_1 + 0xac))
                            return 0
                    else if ((*(esi_1 + 0x18))(*(esi_1 + 0x1c)) != 0)
                        if (*(esi_1 + 0x20) == 0)
                            return 0
                        
                        goto label_564de3
                
                if (i == 0xc0)
                    break
        
        int32_t eax_8
        eax_8.b = i == 0xc2
        arg1[0x11f3] = eax_8
        
        if (sub_564860(arg1, arg2) != 0)
            return 1
    
    return 0
}
