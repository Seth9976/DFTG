// 函数名称: sub_4f59f0
// 虚拟地址: 0x4f59f0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __fastcallsub_4f59f0(void* arg1)
{
    // 第一条实际指令: char* edx = *(arg1 + 4)
    char* edx = *(arg1 + 4)
    uint32_t i
    
    for (i = sx.d(*edx) - 9; i u<= 0x17; i = sx.d(*edx) - 9)
        i = zx.d(lookup_table_4f5a50[i])
        void* eax_1
        bool cond:0_1
        
        switch (jump_table_4f5a40[i])
            case 0x4f5a0e
                edx = &edx[1]
            case 0x4f5a11
                cond:0_1 = edx[1] != 0xa
                eax_1 = &edx[1]
            label_4f5a21:
                
                if (not(cond:0_1))
                    *(arg1 + 4) = eax_1
                    edx = eax_1
                
                edx = &edx[1]
                *(arg1 + 0xc) += 1
                *(arg1 + 8) = edx
            case 0x4f5a1a
                cond:0_1 = edx[1] != 0xd
                eax_1 = &edx[1]
                goto label_4f5a21
            case 0x4f5a3d
                break
        
        *(arg1 + 4) = edx
    
    return i
}
