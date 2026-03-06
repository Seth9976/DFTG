// 函数名称: sub_42a6d0
// 虚拟地址: 0x42a6d0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

voidsub_42a6d0(void* arg1)
{
    // 第一条实际指令: if (data_62bbd4 == 1)
    if (data_62bbd4 == 1)
        sub_48a560(&data_62bbd8, arg1 + 8)
        
        if (*(arg1 + 0x10) != 0)
            void* eax_2 = data_62bbd8
            void* ecx_1 = &data_5b2591
            
            if (eax_2 != 0)
                ecx_1 = eax_2
            
            if (sub_42a4a0(ecx_1) != 0)
                return sub_42a550() __tailcall
    else if (data_62bbe0 == 1)
        sub_48a560(&data_62bbdc, arg1 + 8)
        
        if (*(arg1 + 0x10) != 0)
            void* eax_5 = data_62bbdc
            void* ecx_3 = &data_5b2591
            
            if (eax_5 != 0)
                ecx_3 = eax_5
            
            if (sub_42a4f0(ecx_3) != 0)
                return sub_42a550() __tailcall
}
