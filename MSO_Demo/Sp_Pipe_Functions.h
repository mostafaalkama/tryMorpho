/************************************************************
  Copyright (c) 2002-2005, Morpho 
************************************************************/

// Sp_Pipe_Functions.h : implementation file
//

/////////////////////////////////////////////////////////////////
void Sp_Pipe_LogText
(
	LPTSTR pszFmt,
	...
);

/////////////////////////////////////////////////////////////////
//
// This function Receive a Len (4 bytes) and Datas (Len bytes)
// 
/////////////////////////////////////////////////////////////////
I 
Sp_Pipe_Receive_LenAndDatas
(
	SOCKET	i_x_Sk,
	char	**io_ppc_Data,
	unsigned long	*o_pul_DataSize
);

/////////////////////////////////////////////////////////////////
//
// This function receives the Status
// 
/////////////////////////////////////////////////////////////////
I 
Sp_Pipe_Receive_Status
(
	SOCKET	i_x_Sk
);

/////////////////////////////////////////////////////////////////
//
// This function receives all Response, it loops for the desired Tag response
// 
/////////////////////////////////////////////////////////////////
I 
Sp_Pipe_Receive_Responses
(
	SOCKET	i_x_Sk,
	UL		i_ul_Timeout,
	PC	*	io_ppc_Data,
	PUL		o_pul_DataSize,
	UC		i_uc_TagResponseDesired
);

/////////////////////////////////////////////////////////////////
//
// This function sends the Tag and the returned Status
// 
/////////////////////////////////////////////////////////////////
I 
Sp_Pipe_Send_TagAndStatus
(
	SOCKET	i_x_Sk,
	unsigned char	i_uc_Tag,
	int				i_i_Status
);

/////////////////////////////////////////////////////////////////
//
// This function Sends a Len (4 bytes) and Datas (Len bytes)
// 
/////////////////////////////////////////////////////////////////
I 
Sp_Pipe_Send_LenAndDatas
(
	SOCKET	i_x_Sk,
	PC		i_pc_Data,
	UL		i_ul_DataSize
);
