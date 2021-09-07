# 1 "e:\\performance\\css\\fy21\\wccbusiness\\scripts\\itg\\v1\\falcon_s06_samsungconversion\\\\combined_Falcon_S06_SamsungConversion.c"
# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h" 1
 
 












 











# 103 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"





















































		


		typedef unsigned size_t;
	
	
        
	

















	

 



















 
 
 
 
 


 
 
 
 
 
 














int     lr_start_transaction   (char * transaction_name);
int lr_start_sub_transaction          (char * transaction_name, char * trans_parent);
long lr_start_transaction_instance    (char * transaction_name, long parent_handle);
int   lr_start_cross_vuser_transaction		(char * transaction_name, char * trans_id_param); 



int     lr_end_transaction     (char * transaction_name, int status);
int lr_end_sub_transaction            (char * transaction_name, int status);
int lr_end_transaction_instance       (long transaction, int status);
int   lr_end_cross_vuser_transaction	(char * transaction_name, char * trans_id_param, int status);


 
typedef char* lr_uuid_t;
 



lr_uuid_t lr_generate_uuid();

 


int lr_generate_uuid_free(lr_uuid_t uuid);

 



int lr_generate_uuid_on_buf(lr_uuid_t buf);

   
# 273 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int lr_start_distributed_transaction  (char * transaction_name, lr_uuid_t correlator, long timeout  );

   







int lr_end_distributed_transaction  (lr_uuid_t correlator, int status);


double lr_stop_transaction            (char * transaction_name);
double lr_stop_transaction_instance   (long parent_handle);


void lr_resume_transaction           (char * trans_name);
void lr_resume_transaction_instance  (long trans_handle);


int lr_update_transaction            (const char *trans_name);


 
void lr_wasted_time(long time);


 
int lr_set_transaction(const char *name, double duration, int status);
 
long lr_set_transaction_instance(const char *name, double duration, int status, long parent_handle);


int   lr_user_data_point                      (char *, double);
long lr_user_data_point_instance                   (char *, double, long);
 



int lr_user_data_point_ex(const char *dp_name, double value, int log_flag);
long lr_user_data_point_instance_ex(const char *dp_name, double value, long parent_handle, int log_flag);


int lr_transaction_add_info      (const char *trans_name, char *info);
int lr_transaction_instance_add_info   (long trans_handle, char *info);
int lr_dpoint_add_info           (const char *dpoint_name, char *info);
int lr_dpoint_instance_add_info        (long dpoint_handle, char *info);


double lr_get_transaction_duration       (char * trans_name);
double lr_get_trans_instance_duration    (long trans_handle);
double lr_get_transaction_think_time     (char * trans_name);
double lr_get_trans_instance_think_time  (long trans_handle);
double lr_get_transaction_wasted_time    (char * trans_name);
double lr_get_trans_instance_wasted_time (long trans_handle);
int    lr_get_transaction_status		 (char * trans_name);
int	   lr_get_trans_instance_status		 (long trans_handle);

 



int lr_set_transaction_status(int status);

 



int lr_set_transaction_status_by_name(int status, const char *trans_name);
int lr_set_transaction_instance_status(int status, long trans_handle);


typedef void* merc_timer_handle_t;
 

merc_timer_handle_t lr_start_timer();
double lr_end_timer(merc_timer_handle_t timer_handle);


 
 
 
 
 
 











 



int   lr_rendezvous  (char * rendezvous_name);
 




int   lr_rendezvous_ex (char * rendezvous_name);



 
 
 
 
 
char *lr_get_vuser_ip (void);
void   lr_whoami (int *vuser_id, char ** sgroup, int *scid);
char *	  lr_get_host_name (void);
char *	  lr_get_master_host_name (void);

 
long     lr_get_attrib_long	(char * attr_name);
char *   lr_get_attrib_string	(char * attr_name);
double   lr_get_attrib_double      (char * attr_name);

char * lr_paramarr_idx(const char * paramArrayName, unsigned int index);
char * lr_paramarr_random(const char * paramArrayName);
int    lr_paramarr_len(const char * paramArrayName);

int	lr_param_unique(const char * paramName);
int lr_param_sprintf(const char * paramName, const char * format, ...);


 
 
static void *ci_this_context = 0;






 








void lr_continue_on_error (int lr_continue);
char *   lr_unmask (const char *EncodedString);
char *   lr_decrypt (const char *EncodedString);


 
 
 
 
 
 



 







 















void   lr_abort (void);
void lr_exit(int exit_option, int exit_status);
void lr_abort_ex (unsigned long flags);

void   lr_peek_events (void);


 
 
 
 
 


void   lr_think_time (double secs);

 


void lr_force_think_time (double secs);


 
 
 
 
 



















int   lr_msg (char * fmt, ...);
int   lr_debug_message (unsigned int msg_class,
									    char * format,
										...);
# 513 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_new_prefix (int type,
                                 char * filename,
                                 int line);
# 516 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int   lr_log_message (char * fmt, ...);
int   lr_message (char * fmt, ...);
int   lr_error_message (char * fmt, ...);
int   lr_output_message (char * fmt, ...);
int   lr_vuser_status_message (char * fmt, ...);
int   lr_error_message_without_fileline (char * fmt, ...);
int   lr_fail_trans_with_error (char * fmt, ...);

 
 
 
 
 
# 540 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

 
 
 
 
 





int   lr_next_row ( char * table);
int lr_advance_param ( char * param);



														  
														  

														  
														  

													      
 


char *   lr_eval_string (char * str);
int   lr_eval_string_ext (const char *in_str,
                                     unsigned long const in_len,
                                     char ** const out_str,
                                     unsigned long * const out_len,
                                     unsigned long const options,
                                     const char *file,
								     long const line);
# 574 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_eval_string_ext_free (char * * pstr);

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int lr_param_increment (char * dst_name,
                              char * src_name);
# 597 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"













											  
											  

											  
											  
											  

int	  lr_save_var (char *              param_val,
							  unsigned long const param_val_len,
							  unsigned long const options,
							  char *			  param_name);
# 621 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int   lr_save_string (const char * param_val, const char * param_name);



int   lr_set_custom_error_message (const char * param_val, ...);

int   lr_remove_custom_error_message ();


int   lr_free_parameter (const char * param_name);
int   lr_save_int (const int param_val, const char * param_name);
int   lr_save_timestamp (const char * tmstampParam, ...);
int   lr_save_param_regexp (const char *bufferToScan, unsigned int bufSize, ...);

int   lr_convert_double_to_integer (const char *source_param_name, const char * target_param_name);
int   lr_convert_double_to_double (const char *source_param_name, const char *format_string, const char * target_param_name);

 
 
 
 
 
 
# 700 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_save_datetime (const char *format, int offset, const char *name);









 











 
 
 
 
 






 



char * lr_error_context_get_entry (char * key);

 



long   lr_error_context_get_error_id (void);


 
 
 

int lr_table_get_rows_num (char * param_name);

int lr_table_get_cols_num (char * param_name);

char * lr_table_get_cell_by_col_index (char * param_name, int row, int col);

char * lr_table_get_cell_by_col_name (char * param_name, int row, const char* col_name);

int lr_table_get_column_name_by_index (char * param_name, int col, 
											char * * const col_name,
											size_t * col_name_len);
# 761 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

int lr_table_get_column_name_by_index_free (char * col_name);

 
 
 
 
# 776 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int   lr_zip (const char* param1, const char* param2);
int   lr_unzip (const char* param1, const char* param2);

 
 
 
 
 
 
 
 

 
 
 
 
 
 
int   lr_param_substit (char * file,
                                   int const line,
                                   char * in_str,
                                   size_t const in_len,
                                   char * * const out_str,
                                   size_t * const out_len);
# 800 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_param_substit_free (char * * pstr);


 
# 812 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"





char *   lrfnc_eval_string (char * str,
                                      char * file_name,
                                      long const line_num);
# 820 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"


int   lrfnc_save_string ( const char * param_val,
                                     const char * param_name,
                                     const char * file_name,
                                     long const line_num);
# 826 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

int   lrfnc_free_parameter (const char * param_name );







typedef struct _lr_timestamp_param
{
	int iDigits;
}lr_timestamp_param;

extern const lr_timestamp_param default_timestamp_param;

int   lrfnc_save_timestamp (const char * param_name, const lr_timestamp_param* time_param);

int lr_save_searched_string(char * buffer, long buf_size, unsigned int occurrence,
			    char * search_string, int offset, unsigned int param_val_len, 
			    char * param_name);

 
char *   lr_string (char * str);

 
# 929 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

int   lr_save_value (char * param_val,
                                unsigned long const param_val_len,
                                unsigned long const options,
                                char * param_name,
                                char * file_name,
                                long const line_num);
# 936 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"


 
 
 
 
 











int   lr_printf (char * fmt, ...);
 
int   lr_set_debug_message (unsigned int msg_class,
                                       unsigned int swtch);
# 958 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
unsigned int   lr_get_debug_message (void);


 
 
 
 
 

void   lr_double_think_time ( double secs);
void   lr_usleep (long);


 
 
 
 
 
 




int *   lr_localtime (long offset);


int   lr_send_port (long port);


# 1034 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"



struct _lr_declare_identifier{
	char signature[24];
	char value[128];
};

int   lr_pt_abort (void);

void vuser_declaration (void);






# 1063 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"


# 1075 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
















 
 
 
 
 







int    _lr_declare_transaction   (char * transaction_name);


 
 
 
 
 







int   _lr_declare_rendezvous  (char * rendezvous_name);

 
 
 
 
 


typedef int PVCI;






typedef int VTCERR;









PVCI   vtc_connect(char * servername, int portnum, int options);
VTCERR   vtc_disconnect(PVCI pvci);
VTCERR   vtc_get_last_error(PVCI pvci);
VTCERR   vtc_query_column(PVCI pvci, char * columnName, int columnIndex, char * *outvalue);
VTCERR   vtc_query_row(PVCI pvci, int rowIndex, char * **outcolumns, char * **outvalues);
VTCERR   vtc_send_message(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_if_unique(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_row1(PVCI pvci, char * columnNames, char * messages, char * delimiter, unsigned char sendflag, unsigned short *outUpdates);
VTCERR   vtc_update_message(PVCI pvci, char * column, int index , char * message, unsigned short *outRc);
VTCERR   vtc_update_message_ifequals(PVCI pvci, char * columnName, int index,	char * message, char * ifmessage, unsigned short 	*outRc);
VTCERR   vtc_update_row1(PVCI pvci, char * columnNames, int index , char * messages, char * delimiter, unsigned short *outUpdates);
VTCERR   vtc_retrieve_message(PVCI pvci, char * column, char * *outvalue);
VTCERR   vtc_retrieve_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues);
VTCERR   vtc_retrieve_row(PVCI pvci, char * **outcolumns, char * **outvalues);
VTCERR   vtc_rotate_message(PVCI pvci, char * column, char * *outvalue, unsigned char sendflag);
VTCERR   vtc_rotate_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_rotate_row(PVCI pvci, char * **outcolumns, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_increment(PVCI pvci, char * column, int index , int incrValue, int *outValue);
VTCERR   vtc_clear_message(PVCI pvci, char * column, int index , unsigned short *outRc);
VTCERR   vtc_clear_column(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_ensure_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_drop_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_clear_row(PVCI pvci, int rowIndex, unsigned short *outRc);
VTCERR   vtc_create_column(PVCI pvci, char * column,unsigned short *outRc);
VTCERR   vtc_column_size(PVCI pvci, char * column, int *size);
void   vtc_free(char * msg);
void   vtc_free_list(char * *msglist);

VTCERR   lrvtc_connect(char * servername, int portnum, int options);
VTCERR   lrvtc_connect_ex(char * vtc_first_param, ...);
VTCERR   lrvtc_connect_ex_no_ellipsis(const char *vtc_first_param, char ** arguments, int argCount);
VTCERR   lrvtc_disconnect();
VTCERR   lrvtc_query_column(char * columnName, int columnIndex);
VTCERR   lrvtc_query_row(int columnIndex);
VTCERR   lrvtc_send_message(char * columnName, char * message);
VTCERR   lrvtc_send_if_unique(char * columnName, char * message);
VTCERR   lrvtc_send_row1(char * columnNames, char * messages, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_update_message(char * columnName, int index , char * message);
VTCERR   lrvtc_update_message_ifequals(char * columnName, int index, char * message, char * ifmessage);
VTCERR   lrvtc_update_row1(char * columnNames, int index , char * messages, char * delimiter);
VTCERR   lrvtc_retrieve_message(char * columnName);
VTCERR   lrvtc_retrieve_messages1(char * columnNames, char * delimiter);
VTCERR   lrvtc_retrieve_row();
VTCERR   lrvtc_rotate_message(char * columnName, unsigned char sendflag);
VTCERR   lrvtc_rotate_messages1(char * columnNames, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_rotate_row(unsigned char sendflag);
VTCERR   lrvtc_increment(char * columnName, int index , int incrValue);
VTCERR   lrvtc_noop();
VTCERR   lrvtc_clear_message(char * columnName, int index);
VTCERR   lrvtc_clear_column(char * columnName); 
VTCERR   lrvtc_ensure_index(char * columnName); 
VTCERR   lrvtc_drop_index(char * columnName); 
VTCERR   lrvtc_clear_row(int rowIndex);
VTCERR   lrvtc_create_column(char * columnName);
VTCERR   lrvtc_column_size(char * columnName);



 
 
 
 
 

 
int lr_enable_ip_spoofing();
int lr_disable_ip_spoofing();


 




int lr_convert_string_encoding(char * sourceString, char * fromEncoding, char * toEncoding, char * paramName);
int lr_read_file(const char *filename, const char *outputParam, int continueOnError);

int lr_get_char_count(const char * string);


 
int lr_db_connect (char * pFirstArg, ...);
int lr_db_disconnect (char * pFirstArg,	...);
int lr_db_executeSQLStatement (char * pFirstArg, ...);
int lr_db_dataset_action(char * pFirstArg, ...);
int lr_checkpoint(char * pFirstArg,	...);
int lr_db_getvalue(char * pFirstArg, ...);







 
 



















# 1 "e:\\performance\\css\\fy21\\wccbusiness\\scripts\\itg\\v1\\falcon_s06_samsungconversion\\\\combined_Falcon_S06_SamsungConversion.c" 2

# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/SharedParameter.h" 1



 
 
 
 
# 100 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/SharedParameter.h"






typedef int PVCI2;






typedef int VTCERR2;


 
 
 

 
extern PVCI2    vtc_connect(char *servername, int portnum, int options);
extern VTCERR2  vtc_disconnect(PVCI2 pvci);
extern VTCERR2  vtc_get_last_error(PVCI2 pvci);

 
extern VTCERR2  vtc_query_column(PVCI2 pvci, char *columnName, int columnIndex, char **outvalue);
extern VTCERR2  vtc_query_row(PVCI2 pvci, int columnIndex, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_send_message(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_if_unique(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_row1(PVCI2 pvci, char *columnNames, char *messages, char *delimiter,  unsigned char sendflag, unsigned short *outUpdates);
extern VTCERR2  vtc_update_message(PVCI2 pvci, char *column, int index , char *message, unsigned short *outRc);
extern VTCERR2  vtc_update_message_ifequals(PVCI2 pvci, char	*columnName, int index,	char *message, char	*ifmessage,	unsigned short 	*outRc);
extern VTCERR2  vtc_update_row1(PVCI2 pvci, char *columnNames, int index , char *messages, char *delimiter, unsigned short *outUpdates);
extern VTCERR2  vtc_retrieve_message(PVCI2 pvci, char *column, char **outvalue);
extern VTCERR2  vtc_retrieve_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues);
extern VTCERR2  vtc_retrieve_row(PVCI2 pvci, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_rotate_message(PVCI2 pvci, char *column, char **outvalue, unsigned char sendflag);
extern VTCERR2  vtc_rotate_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues, unsigned char sendflag);
extern VTCERR2  vtc_rotate_row(PVCI2 pvci, char ***outcolumns, char ***outvalues, unsigned char sendflag);
extern VTCERR2	vtc_increment(PVCI2 pvci, char *column, int index , int incrValue, int *outValue);
extern VTCERR2  vtc_clear_message(PVCI2 pvci, char *column, int index , unsigned short *outRc);
extern VTCERR2  vtc_clear_column(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_clear_row(PVCI2 pvci, int rowIndex, unsigned short *outRc);

extern VTCERR2  vtc_create_column(PVCI2 pvci, char *column,unsigned short *outRc);
extern VTCERR2  vtc_column_size(PVCI2 pvci, char *column, int *size);
extern VTCERR2  vtc_ensure_index(PVCI2 pvci, char *column, unsigned short *outRc);
extern VTCERR2  vtc_drop_index(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_noop(PVCI2 pvci);

 
extern void vtc_free(char *msg);
extern void vtc_free_list(char **msglist);

 


 




 




















 




 
 
 

extern VTCERR2  lrvtc_connect(char *servername, int portnum, int options);
 
 
extern VTCERR2  lrvtc_disconnect();
extern VTCERR2  lrvtc_query_column(char *columnName, int columnIndex);
extern VTCERR2  lrvtc_query_row(int columnIndex);
extern VTCERR2  lrvtc_send_message(char *columnName, char *message);
extern VTCERR2  lrvtc_send_if_unique(char *columnName, char *message);
extern VTCERR2  lrvtc_send_row1(char *columnNames, char *messages, char *delimiter,  unsigned char sendflag);
extern VTCERR2  lrvtc_update_message(char *columnName, int index , char *message);
extern VTCERR2  lrvtc_update_message_ifequals(char *columnName, int index, char 	*message, char *ifmessage);
extern VTCERR2  lrvtc_update_row1(char *columnNames, int index , char *messages, char *delimiter);
extern VTCERR2  lrvtc_retrieve_message(char *columnName);
extern VTCERR2  lrvtc_retrieve_messages1(char *columnNames, char *delimiter);
extern VTCERR2  lrvtc_retrieve_row();
extern VTCERR2  lrvtc_rotate_message(char *columnName, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_messages1(char *columnNames, char *delimiter, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_row(unsigned char sendflag);
extern VTCERR2  lrvtc_increment(char *columnName, int index , int incrValue);
extern VTCERR2  lrvtc_clear_message(char *columnName, int index);
extern VTCERR2  lrvtc_clear_column(char *columnName);
extern VTCERR2  lrvtc_clear_row(int rowIndex);
extern VTCERR2  lrvtc_create_column(char *columnName);
extern VTCERR2  lrvtc_column_size(char *columnName);
extern VTCERR2  lrvtc_ensure_index(char *columnName);
extern VTCERR2  lrvtc_drop_index(char *columnName);

extern VTCERR2  lrvtc_noop();

 
 
 

                               


 
 
 





















# 2 "e:\\performance\\css\\fy21\\wccbusiness\\scripts\\itg\\v1\\falcon_s06_samsungconversion\\\\combined_Falcon_S06_SamsungConversion.c" 2

# 1 "globals.h" 1



 
 

# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/web_api.h" 1







# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h" 1



























































 




 



 











 





















 
 
 

  int
	web_add_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_add_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
	
  int
	web_add_auto_header(
		const char *		mpszHeader,
		const char *		mpszValue);

  int
	web_add_header(
		const char *		mpszHeader,
		const char *		mpszValue);
  int
	web_add_cookie(
		const char *		mpszCookie);
  int
	web_cleanup_auto_headers(void);
  int
	web_cleanup_cookies(void);
  int
	web_concurrent_end(
		const char * const	mpszReserved,
										 
		...								 
	);
  int
	web_concurrent_start(
		const char * const	mpszConcurrentGroupName,
										 
										 
		...								 
										 
	);
  int
	web_create_html_param(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim);
  int
	web_create_html_param_ex(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim,
		const char *		mpszNum);
  int
	web_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_disable_keep_alive(void);
  int
	web_enable_keep_alive(void);
  int
	web_find(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_get_int_property(
		const int			miHttpInfoType);
  int
	web_image(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_image_check(
		const char *		mpszName,
		...);
  int
	web_java_check(
		const char *		mpszName,
		...);
  int
	web_link(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

	
  int
	web_global_verification(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
  int
	web_reg_find(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
				
  int
	web_reg_save_param(
		const char *		mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 

  int
	web_convert_param(
		const char * 		mpszParamName, 
										 
		...);							 
										 
										 


										 

										 
  int
	web_remove_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
				
  int
	web_remove_auto_header(
		const char *		mpszHeaderName,
		...);							 
										 



  int
	web_remove_cookie(
		const char *		mpszCookie);

  int
	web_save_header(
		const char *		mpszType,	 
		const char *		mpszName);	 
  int
	web_set_certificate(
		const char *		mpszIndex);
  int
	web_set_certificate_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_set_connections_limit(
		const char *		mpszLimit);
  int
	web_set_max_html_param_len(
		const char *		mpszLen);
  int
	web_set_max_retries(
		const char *		mpszMaxRetries);
  int
	web_set_proxy(
		const char *		mpszProxyHost);
  int
	web_set_pac(
		const char *		mpszPacUrl);
  int
	web_set_proxy_bypass(
		const char *		mpszBypass);
  int
	web_set_secure_proxy(
		const char *		mpszProxyHost);
  int
	web_set_sockets_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue
	);
  int
	web_set_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue,
		...								 
	);
  int
	web_set_timeout(
		const char *		mpszWhat,
		const char *		mpszTimeout);
  int
	web_set_user(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);

  int
	web_sjis_to_euc_param(
		const char *		mpszParamName,
										 
		const char *		mpszParamValSjis);
										 

  int
	web_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_submit_form(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	spdy_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_set_proxy_bypass_local(
		const char * mpszNoLocal
		);

  int 
	web_cache_cleanup(void);

  int
	web_create_html_query(
		const char* mpszStartQuery,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_create_radio_button_param(
		const char *NameFiled,
		const char *NameAndVal,
		const char *ParamName
		);

  int
	web_convert_from_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										
  int
	web_convert_to_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_ex(
		const char * mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_xpath(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_json(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_regexp(
		 const char * mpszParamName,
		 ...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_attrib(
		const char * mpszParamName,
		...);
										 
										 
										 
										 
										 
										 
										 		
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_run(
		const char * mpszCode,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_reset(void);

  int
	web_convert_date_param(
		const char * 		mpszParamName,
		...);










# 789 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"


# 802 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"



























# 840 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"

 
 
 


  int
	FormSubmit(
		const char *		mpszFormName,
		...);
  int
	InitWebVuser(void);
  int
	SetUser(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);
  int
	TerminateWebVuser(void);
  int
	URL(
		const char *		mpszUrlName);
























# 908 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"


  int
	web_rest(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 

  int
web_stream_open(
	const char *		mpszArg1,
	...
);
  int
	web_stream_wait(
		const char *		mpszArg1,
		...
	);

  int
	web_stream_close(
		const char *		mpszArg1,
		...
	);

  int
web_stream_play(
	const char *		mpszArg1,
	...
	);

  int
web_stream_pause(
	const char *		mpszArg1,
	...
	);

  int
web_stream_seek(
	const char *		mpszArg1,
	...
	);

  int
web_stream_get_param_int(
	const char*			mpszStreamID,
	const int			miStateType
	);

  double
web_stream_get_param_double(
	const char*			mpszStreamID,
	const int			miStateType
	);

  int
web_stream_get_param_string(
	const char*			mpszStreamID,
	const int			miStateType,
	const char*			mpszParameterName
	);

  int
web_stream_set_param_int(
	const char*			mpszStreamID,
	const int			miStateType,
	const int			miStateValue
	);

  int
web_stream_set_param_double(
	const char*			mpszStreamID,
	const int			miStateType,
	const double		mdfStateValue
	);

  int
web_stream_set_custom_mpd(
	const char*			mpszStreamID,
	const char*			aMpdBuf
	);

 
 
 






# 9 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/web_api.h" 2

















 







 















  int
	web_reg_add_cookie(
		const char *		mpszCookie,
		...);							 
										 

  int
	web_report_data_point(
		const char *		mpszEventType,
		const char *		mpszEventName,
		const char *		mpszDataPointName,
		const char *		mpszLAST);	 
										 
										 
										 

  int
	web_text_link(
		const char *		mpszStepName,
		...);

  int
	web_element(
		const char *		mpszStepName,
		...);

  int
	web_image_link(
		const char *		mpszStepName,
		...);

  int
	web_static_image(
		const char *		mpszStepName,
		...);

  int
	web_image_submit(
		const char *		mpszStepName,
		...);

  int
	web_button(
		const char *		mpszStepName,
		...);

  int
	web_edit_field(
		const char *		mpszStepName,
		...);

  int
	web_radio_group(
		const char *		mpszStepName,
		...);

  int
	web_check_box(
		const char *		mpszStepName,
		...);

  int
	web_list(
		const char *		mpszStepName,
		...);

  int
	web_text_area(
		const char *		mpszStepName,
		...);

  int
	web_map_area(
		const char *		mpszStepName,
		...);

  int
	web_eval_java_script(
		const char *		mpszStepName,
		...);

  int
	web_reg_dialog(
		const char *		mpszArg1,
		...);

  int
	web_reg_cross_step_download(
		const char *		mpszArg1,
		...);

  int
	web_browser(
		const char *		mpszStepName,
		...);

  int
	web_control(
		const char *		mpszStepName,
		...);

  int
	web_set_rts_key(
		const char *		mpszArg1,
		...);

  int
	web_save_param_length(
		const char * 		mpszParamName,
		...);

  int
	web_save_timestamp_param(
		const char * 		mpszParamName,
		...);

  int
	web_load_cache(
		const char *		mpszStepName,
		...);							 
										 

  int
	web_dump_cache(
		const char *		mpszStepName,
		...);							 
										 
										 

  int
	web_reg_find_in_log(
		const char *		mpszArg1,
		...);							 
										 
										 

  int
	web_get_sockets_info(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 

  int
	web_add_cookie_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

  int
	web_hook_java_script(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

 
 
 
 
 
 
 
 
 
 
 
 
  int
	web_reg_async_attributes(
		const char *		mpszArg,
		...
	);

 
 
 
 
 
 
  int
	web_sync(
		 const char *		mpszArg1,
		 ...
	);

 
 
 
 
  int
	web_stop_async(
		const char *		mpszArg1,
		...
	);

 
 
 
 
 

 
 
 

typedef enum WEB_ASYNC_CB_RC_ENUM_T
{
	WEB_ASYNC_CB_RC_OK,				 

	WEB_ASYNC_CB_RC_ABORT_ASYNC_NOT_ERROR,
	WEB_ASYNC_CB_RC_ABORT_ASYNC_ERROR,
										 
										 
										 
										 
	WEB_ASYNC_CB_RC_ENUM_COUNT
} WEB_ASYNC_CB_RC_ENUM;

 
 
 

typedef enum WEB_CONVERS_CB_CALL_REASON_ENUM_T
{
	WEB_CONVERS_CB_CALL_REASON_BUFFER_RECEIVED,
	WEB_CONVERS_CB_CALL_REASON_END_OF_TASK,

	WEB_CONVERS_CB_CALL_REASON_ENUM_COUNT
} WEB_CONVERS_CB_CALL_REASON_ENUM;

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

typedef
int														 
	(*RequestCB_t)();

typedef
int														 
	(*ResponseBodyBufferCB_t)(
		  const char *		aLastBufferStr,
		  int				aLastBufferLen,
		  const char *		aAccumulatedStr,
		  int				aAccumulatedLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseCB_t)(
		  const char *		aResponseHeadersStr,
		  int				aResponseHeadersLen,
		  const char *		aResponseBodyStr,
		  int				aResponseBodyLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseHeadersCB_t)(
		  int				aHttpStatusCode,
		  const char *		aAccumulatedHeadersStr,
		  int				aAccumulatedHeadersLen);



 
 
 

typedef enum WEB_CONVERS_UTIL_RC_ENUM_T
{
	WEB_CONVERS_UTIL_RC_OK,
	WEB_CONVERS_UTIL_RC_CONVERS_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_TASK_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_UNAVIALABLE,
	WEB_CONVERS_UTIL_RC_INVALID_ARGUMENT,

	WEB_CONVERS_UTIL_RC_ENUM_COUNT
} WEB_CONVERS_UTIL_RC_ENUM;

 
 
 

  int					 
	web_util_set_request_url(
		  const char *		aUrlStr);

  int					 
	web_util_set_request_body(
		  const char *		aRequestBodyStr);

  int					 
	web_util_set_formatted_request_body(
		  const char *		aRequestBodyStr);


 
 
 
 
 

 
 
 
 
 

 
 
 
 
 
 
 
 

 
 
  int
web_websocket_connect(
		 const char *	mpszArg1,
		 ...
		 );


 
 
 
 
 																						
  int
web_websocket_send(
	   const char *		mpszArg1,
		...
	   );

 
 
 
 
 
 
  int
web_websocket_close(
		const char *	mpszArg1,
		...
		);

 
typedef
void														
(*OnOpen_t)(
			  const char* connectionID,  
			  const char * responseHeader,  
			  int length  
);

typedef
void														
(*OnMessage_t)(
	  const char* connectionID,  
	  int isbinary,  
	  const char * data,  
	  int length  
	);

typedef
void														
(*OnError_t)(
	  const char* connectionID,  
	  const char * message,  
	  int length  
	);

typedef
void														
(*OnClose_t)(
	  const char* connectionID,  
	  int isClosedByClient,  
	  int code,  
	  const char* reason,  
	  int length  
	 );
 
 
 
 
 





# 7 "globals.h" 2

# 1 "lrw_custom_body.h" 1
 




# 8 "globals.h" 2


 
 


# 3 "e:\\performance\\css\\fy21\\wccbusiness\\scripts\\itg\\v1\\falcon_s06_samsungconversion\\\\combined_Falcon_S06_SamsungConversion.c" 2

# 1 "vuser_init.c" 1
vuser_init()
{
	return 0;
}
# 4 "e:\\performance\\css\\fy21\\wccbusiness\\scripts\\itg\\v1\\falcon_s06_samsungconversion\\\\combined_Falcon_S06_SamsungConversion.c" 2

# 1 "SamsungConversion.c" 1
SamsungConversion()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.2");
	

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");
	web_add_auto_header("Sec-Fetch-Dest", 
		"document");
	web_add_header("Sec-Fetch-User", 
		"?1");
	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");
	web_add_auto_header("sec-ch-ua", 
		"\" Not A;Brand\";v=\"99\", \"Chromium\";v=\"90\", \"Google Chrome\";v=\"90\"");
	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");
	
	lr_start_transaction("FP20_SamsungConversion_01_doc");

	web_url("conversion", 
		"URL=https://{p_Host}/{p_locale}/conversion", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		"LAST");

	lr_end_transaction("FP20_SamsungConversion_01_doc", 2);
	lr_think_time(1);

	(web_remove_auto_header("Upgrade-Insecure-Requests", "ImplicitGen=Yes", "LAST"));
	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");
	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");
	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");
	
	lr_start_transaction("FP20_SamsungConversion_02_api_Region");

	web_url("region", 
		"URL=https://{p_Host}/wcc-services/ssc/region", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/conversion", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"LAST");
	
	lr_end_transaction("FP20_SamsungConversion_02_api_Region", 2);
	lr_think_time(1);
	
	lr_start_transaction("FP20_SamsungConversion_03_api_termbase");

	web_url("conversion_2", 
		"URL=https://{p_Host}/wcc-services/termbase/{p_locale}/conversion", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/conversion", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		"LAST");

	lr_end_transaction("FP20_SamsungConversion_03_api_termbase", 2);
	lr_think_time(1);
	
	web_add_header("Origin", 
		"https://{p_Host}");
	
	lr_start_transaction("FP20_SamsungConversion_04_api_href");

	web_custom_request("href", 
		"URL=https://{p_Host}/wcc-services/sitemap/href", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/conversion", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"template\":\"samsung_conversion\",\"path\":\"/conversion\",\"seriesoid\":\"0\",\"modeloid\":\"0\"}", 
		"LAST");
	
	lr_end_transaction("FP20_SamsungConversion_04_api_href", 2);
	lr_think_time(1);
	
	lr_start_transaction("FP20_SamsungConversion_05_api_wcc_second_Nav");

	web_url("wcc_second_Nav", 
		"URL=https://{p_Host}/wcc-services/cms-v2/{p_locale}/wcc_second_Nav", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/conversion", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		"LAST");
	lr_end_transaction("FP20_SamsungConversion_05_api_wcc_second_Nav", 2);
	lr_think_time(1);
	
	lr_start_transaction("FP20_SamsungConversion_06_api_wcc_sitehome_alerts");

	web_url("wcc_sitehome_alerts", 
		"URL=https://{p_Host}/wcc-services/cms-v1/{p_locale}/wcc_sitehome_alerts", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://{p_Host}/{p_locale}/conversion", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"LAST");
	lr_end_transaction("FP20_SamsungConversion_06_api_wcc_sitehome_alerts", 2);
	lr_think_time(1);
	
	lr_start_transaction("FP20_SamsungConversion_07_api_wcc-services-ssc");

	web_url("conversion_3", 
		"URL=https://{p_Host}/wcc-services/ssc/config/{p_locale}/conversion", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/conversion", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		"LAST");
	lr_end_transaction("FP20_SamsungConversion_07_api_wcc-services-ssc", 2);
	lr_think_time(1);
	
	lr_start_transaction("FP20_SamsungConversion_08_api_wcc_pfinder_common");

	web_url("wcc_pfinder_common", 
		"URL=https://{p_Host}/wcc-services/cms-v2/contexual/{p_locale}/wcc_pfinder_common?pageTemplate=samsung_conversion", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/conversion", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		"LAST");
	lr_end_transaction("FP20_SamsungConversion_08_api_wcc_pfinder_common", 2);

	
	 
# 164 "SamsungConversion.c"

	(web_remove_auto_header("Sec-Fetch-Mode", "ImplicitGen=Yes", "LAST"));
	web_add_header("Sec-Fetch-Mode", 
		"cors");
	(web_remove_auto_header("Sec-Fetch-Site", "ImplicitGen=Yes", "LAST"));
	web_add_header("Sec-Fetch-Site", 
		"same-origin");
	
	 
	
	lr_start_transaction("FP20_SamsungConversion_10_EnterSamsungSerialNumer&ClickSubmit");

	web_custom_request("serialnumber", 
		"URL=https://{p_Host}/wcc-services/samsungconversion/serialnumber", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/conversion", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"serialNumber\":\"{p_SamSerialNum}\",\"captchaToken\":\"\",\"cc\":\"{p_Region}\",\"lc\":\"{p_lc}\"}", 
		"LAST");
	lr_end_transaction("FP20_SamsungConversion_10_EnterSamsungSerialNumer&ClickSubmit",2);
	lr_think_time(1);	

	(web_remove_auto_header("Sec-Fetch-Mode", "ImplicitGen=Yes", "LAST"));
	web_add_header("Sec-Fetch-Mode", 
		"cors");
	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	 
	
	lr_start_transaction("FP20_SamsungConversion_11_EnterSamsungProductNumer&ClickSubmit");
	
	web_custom_request("productnumber", 
		"URL=https://{p_Host}/wcc-services/samsungconversion/productnumber", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/conversion", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"productNumber\":\"{p_SamProductNum}\",\"captchaToken\":\"\",\"cc\":\"{p_Region}\",\"lc\":\"{p_lc}\"}", 
		"LAST");

	lr_end_transaction("FP20_SamsungConversion_11_EnterSamsungProductNumer&ClickSubmit",2);
	lr_think_time(1);
	
	 
	
	lr_start_transaction("FP20_SamsungConversion_12_EnterHPSerialNumer&ClickSubmit");

	web_custom_request("serialnumber_2", 
		"URL=https://{p_Host}/wcc-services/samsungconversion/serialnumber", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/conversion", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"serialNumber\":\"{p_HpSerialNum}\",\"captchaToken\":\"\",\"cc\":\"{p_Region}\",\"lc\":\"{p_lc}\"}", 
		"LAST");
	lr_end_transaction("FP20_SamsungConversion_12_EnterHPSerialNumer&ClickSubmit",2);
	lr_think_time(1);	

	(web_remove_auto_header("Sec-Fetch-Mode", "ImplicitGen=Yes", "LAST"));
	web_add_header("Sec-Fetch-Mode", 
		"cors");
	web_add_header("Sec-Fetch-Site", 
		"same-origin");

	 
	
	lr_start_transaction("FP20_SamsungConversion_13_EnterHPProductNumber&ClickSubmit");
	
	web_custom_request("productnumber_2", 
		"URL=https://{p_Host}/wcc-services/samsungconversion/productnumber", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/conversion", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"productNumber\":\"{p_HPProductNum}\",\"captchaToken\":\"\",\"cc\":\"{p_Region}\",\"lc\":\"{p_lc}\"}", 
		"LAST");
	lr_end_transaction("FP20_SamsungConversion_13_EnterHPProductNumber&ClickSubmit", 2);
	lr_think_time(1);
	
	(web_remove_auto_header("Origin", "ImplicitGen=Yes", "LAST"));
	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");
	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");
	
	lr_start_transaction("FP21_BulkConversion_01_ClickOnBulkUploadLink");

	web_url("conversion_4", 
		"URL=https://{p_Host}/wcc-services/ssc/config/{p_locale}/conversion", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/conversion", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		"LAST");

	lr_end_transaction("FP21_BulkConversion_01_ClickOnBulkUploadLink", 2);
	lr_think_time(1);
		
	 
	
	lr_start_transaction("FP21_BulkConversion_02_SelectFile&Submit");

	web_custom_request("bulk", 
		"URL=https://{p_Host}/wcc-services/samsungconversion/bulk?cc=us&lc=en", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://{p_Host}/{p_locale}/conversion", 
		"Snapshot=t150.inf", 
		"Mode=HTTP", 
		"EncType=multipart/form-data; boundary=----WebKitFormBoundaryScb7jG1TCYygGf7u", 
		"BodyBinary=------WebKitFormBoundaryScb7jG1TCYygGf7u\r\nContent-Disposition: form-data; name=\"file\"; filename=\"{p_Filename}\"\r\nContent-Type: application/vnd.openxmlformats-officedocument.spreadsheetml.sheet\r\n\r\nPK\\x03\\x04\n\\x00\\x00\\x00\\x08\\x00\\xBC4\\xABR_)\\xF6\\xB7f\\x01\\x00\\x00\\x88\\x06\\x00\\x00\\x13\\x00\\x00\\x00[Content_Types].xml\\xCDU[O\\xC20\\x14~\\xF7W,}%[\\x01\\x8D1\\x86\\xC1\\x83\\xE8\\xA3\\x92\\x88?"
		"\\xA0\\xAE\\x07\\xD6\\xD0\\xB5M\\xCF\\xE1\\xF6\\xEF=\\x1Bh\\x8C\\xE1\\x12\\x02\\x89\\xBC\\xAC\\xD9\\xCEw\\xEB\\xC9z\\xDA\\x1B\\xAC*\\x9B, \\xA2\\xF1.\\x17\\x9D\\xAC-\\x12p\\x85\\xD7\\xC6Ms\\xF11~I\\x1FD\\x82\\xA4\\x9CV\\xD6;\\xC8\\xC5\\x1AP\\x0C\\xFA7\\xBD\\xF1:\\x00&Lv\\x98\\x8B\\x92(<J\\x89E\t\\x95\\xC2\\xCC\\x07p\\\\\\x99\\xF8X)\\xE2\\xD78\\x95A\\x1535\\x05\\xD9m\\xB7\\xEFe\\xE1\\x1D\\x81\\xA3\\x94j\r\\xD1\\xEF\r"
		"a\\xA2\\xE6\\x96\\x92\\xE7\\x15\\x7F\\xDE\\x04\\x89`Q$O\\x1B`\\xED\\x95\\x0B\\x15\\x825\\x85\"\\xAE\\xCB\\x85\\xD3\\x7F\\\\\\xD2\\xADC\\xC6\\xCC\\x06\\x83\\xA5\t\\xD8b\\x80\\x90;\\x1D\\xEA\\xCA~\\x83-\\xEF\\x8D;\\x13\\x8D\\x86d\\xA4\"\\xBD\\xAA\\x8AQre\\xE5\\xD2\\xC7\\xD9\\xA7\\xF7\\xB3\\xEC\\xB0\\xC8\\x8E\\x94~21\\x05h_\\xCC+\\xA6d\\x18\""
		"(\\x8D%\\x00U6k\\xD6\\xACR\\xC6\\xB5\\x8E\\xFB7`\\x94\\xCD\\xD2\\xB9p\\x90\\x1F\\xFD\\x13st\\xAF$\\xC7\\xED\\x95\\xE4\\xB8\\xFB\\xA7\\x1C\\xC4\\xE7\\x106\\xCF\\xF3\\x7F\\x8DF\\xE6\\x88!\\xD2\\xDA\\x02^\\xFA84\\xA2\\xC7\\x9CK\\x15A\\xBFS\\xE4\\x81u\\xF1\\x00\\xBF\\xB5\\x0F\\x8C\\x92\\xC5\\x99\\xAE\\xCC\\x1FF\\xB5d\\x97}\\x1Be\\xE8(\\xFA\\x80<:#\\x9C\\xBE\\xCB\\xEF\\xD9X\\xB3\\xD3\\xC0B\\x10\\xC9\\x1Cn\\xED\\x8F#K\\x9F\\xDDV\\xA8{\\xA5A\\xEF\\xF0\\x96\\xCDE\\xD2\\xFF\\x02PK\\x03\\x04\n"
		"\\x00\\x00\\x00\\x00\\x00\\xBC4\\xABR\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x06\\x00\\x00\\x00_rels/PK\\x03\\x04\n\\x00\\x00\\x00\\x08\\x00\\xBC4\\xABR\\xF2\\x9FI\\xDA\\xE9\\x00\\x00\\x00K\\x02\\x00\\x00\\x0B\\x00\\x00\\x00_rels/.rels\\xAD\\x92\\xC1N\\xC30\\x0C@\\xEF|E\\xE4\\xFB\\x9AnH\\x08\\xA1\\xA5\\xBB \\xA4\\xDD&4>\\xC0$n\\x1B\\xB5\\x8D\\xA3\\xC4\\x83\\xEE\\xEF\\x89\\x90@\\x0C\\x8Di\\x07\\x8Eq\\xEC\\xE7g\\xCB\\xEB\\xCD<\\x8D\\xEA\\x8DR\\xF6\\x1C\\x0C,"
		"\\xAB\\x1A\\x14\\x05\\xCB\\xCE\\x87\\xCE\\xC0\\xCB\\xFEiq\\x0F*\\x0B\\x06\\x87#\\x072p\\xA4\\x0C\\x9B\\xE6f\\xFDL#J\\xA9\\xC9\\xBD\\x8FY\\x15H\\xC8\\x06z\\x91\\xF8\\xA0u\\xB6=M\\x98+\\x8E\\x14\\xCAO\\xCBiB)\\xCF\\xD4\\xE9\\x88v\\xC0\\x8E\\xF4\\xAA\\xAE\\xEFt\\xFA\\xC9\\x80\\xE6\\x84\\xA9\\xB6\\xCE@\\xDA\\xBA%\\xA8\\xFD1\\xD25ln[o\\xE9\\x91\\xEDa\\xA2 gZ\\xFC\\xCA(dL\\x1D\\x89\\x81y\\xD4\\xEF\\x9C\\x86W\\xE6\\xA1*P\\xD0\\xE7]V\\xD7\\xBB\\xFC="
		"\\xA7\\x9EH\\xD0\\xA1\\xA0\\xB6\\x9Ch\\x11S\\xA9N\\xE2\\xCBZ\\xBFu\\x1C\\xDB]\t\\xE7\\xCF\\x8CKB\\xB7\\xFF\\xB9\\x1C\\x9A\\x85\\x82#wY\tc\\xFC2\\xD2'7\\xD0|\\x00PK\\x03\\x04\n\\x00\\x00\\x00\\x00\\x00\\xBC4\\xABR\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x03\\x00\\x00\\x00xl/PK\\x03\\x04\n\\x00\\x00\\x00\\x00\\x00\\xBC4\\xABR\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\t\\x00\\x00\\x00xl/_rels/PK\\x03\\x04\n"
		"\\x00\\x00\\x00\\x08\\x00\\xBC4\\xABR\\x8D3S\\xD3\\xFE\\x00\\x00\\x00`\\x04\\x00\\x00\\x1A\\x00\\x00\\x00xl/_rels/workbook.xml.rels\\xBD\\x94\\xCDj\\xC30\\x10\\x84\\xEF}\n\\xB1\\xF7Z\\xB6\\x93\\xA6%D\\xCE\\xA5\\x14rm\\xDD\\x07\\x10\\xF2\\xDA2\\xB1%!m\\x7F\\xFC\\xF6U\\x1B\\xDA8\\x10L\\x0F\\xC6'1+v\\xE6c\\x04\\xDA\\xED?\\xFB\\x8E\\xBD\\xA3\\x0F\\xAD5\\x02\\xB2$\\x05\\x86F\\xD9\\xAA5\\x8D\\x80\\xD7\\xF2\\xE9\\xF6\\x01X i*\\xD9Y\\x83\\x02\\x06\\x0C\\xB0/nv\\xCF\\xD8I\\x8A;"
		"A\\xB7.\\xB0hb\\x82\\x00M\\xE4\\xB6\\x9C\\x07\\xA5\\xB1\\x97!\\xB1\\x0EM\\xBC\\xA9\\xAD\\xEF%E\\xE9\\x1B\\xEE\\xA4:\\xCA\\x06y\\x9E\\xA6\\x1B\\xEE\\xC7\\x1EP\\\\x\\xB2C%\\xC0\\x1F\\xAA\\x0CX98\\xFC\\x8F\\xB7\\xAD\\xEBV\\xE1\\xA3Uo=\\x1A\\xBA\\x12\\xC1\\x03\r]\\xE4g\\xA5\\xF4\r\\x92\\x80\\x93N\\xA2\\x0F\\xF0\\xEB\\xF1\\xF9\\x9C\\xF1\\x14w\\xF1\\x9C\\xFE#O\\xC3l\\x8Aa5k\\x05Zz\\xAC^\\xC8\\xC7\\x07\\x1E71\\x1EO\\xC1\\xAC\\xE7\\x84\\xF9\\xB0\\xFE\\x184\"\\x9DA\\xFEF\\xDF\\xA8\\xF1\\x98l\\xE6na\\x98|\n"
		"f\\xB30\\xCCj\n\\xE6~a\\x98\\xF5/\\x0C\\xBF\\xF8\\x18\\x8A/PK\\x03\\x04\n\\x00\\x00\\x00\\x00\\x00\\xBC4\\xABR\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x0E\\x00\\x00\\x00xl/worksheets/PK\\x03\\x04\n\\x00\\x00\\x00\\x08\\x00\\xBC4\\xABR_\\x0F\\xA3\\xD7\\xFB\\x06\\x00\\x00\\xE89\\x00\\x00\\x18\\x00\\x00\\x00xl/worksheets/sheet1.xml\\x95\\x9B]o\\xDBF\\x10E\\xDF\\xFB+\\x04\\xBE\\xC7\\xD2~\\xEF\\x18\\x96\\x83\\xC4F\\xD1\\x02-P\\xB4)"
		"\\xFA\\xCCP\\x94MD\\x12\\x05\\x92\\xB6\\x93\\xFE\\xFARTlhW\\xE9\\xD5\\xCC\\x8Ba\\xE9\\x92\\xAB\\xA1\\xCC{`\\xF0\\x907\\xEF\\xBFn7\\xB3\\xE7\\xBA\\xEB\\x9Bv\\xB7,\\xD4\\xD5\\xA2\\x98\\xD5\\xBB\\xAA]5\\xBB\\x87e\\xF1\\xF7\\xA7\\x9F\\xDF\\xC5b\\xD6\\x0F\\xE5nUn\\xDA]\\xBD,\\xBE\\xD5}\\xF1\\xFE\\xF6\\xA7\\x9B\\x97\\xB6\\xFB\\xD2?\\xD6\\xF50\\x1B\\x17\\xD8\\xF5\\xCB\\xE2q\\x18\\xF6\\xD7\\xF3y_=\\xD6\\xDB\\xB2\\xBFj\\xF7\\xF5nL\\xD6m\\xB7-\\x87\\xF1e\\xF70\\xEF\\xF7]]\\xAE\\xA6\\x9D\\xB6\\x9B\\xB9^,"
		"\\xFC|[6\\xBB\\xE2\\xB8\\xC2u\\xC7Y\\xA3]\\xAF\\x9B\\xAA\\xBEo\\xAB\\xA7m\\xBD\\x1B\\x8E\\x8Bt\\xF5\\xA6\\x1C\\xC6\\xF1\\xFB\\xC7f\\xDF\\xBF\\xAE\\xB6\\xAD8\\xCBm\\xCB\\xEE\\xCB\\xD3\\xFE]\\xD5n\\xF7\\xE3\\x12\\x9F\\x9BM3|\\x9B\\x16-f\\xDB\\xEA\\xFA\\xD7\\x87]\\xDB\\x95\\x9F7\\xE3a\\x7FU\\xB6\\xAC^\\xD7\\x9E^\\x9C-\\xBFm\\xAA\\xAE\\xED\\xDB\\xF5p5.\\xF7}\\xD0\\xF3c\\xA69\\xCD\\xC7\\x95noV\\xCDx\\x04\\x87o}\\xD6\\xD5\\xEBe\\xF1A]\\xDF\\x11\\x15\\xF3\\xDB\\x9Bi\\xE3\\x9F\\xA7!\\xFF\\xE8f\\xABz]"
		">m\\x86?\\xDB\\x97_\\xEA\\xE6\\xE1q\\x18\\xFFF\\xAE\\x98\\xB5O\\xC3\\xA6\\xD9\\xD5\\xBF\\xD5\\xCF\\xF5f\\x8C\\x96\\xC5\"}\\xEF\\xAE\\xDDL\\xEFM\\x93^\\xAF\\xBE\\xDD\\xD7}5~_\\xCB\\xC2\\x8D;WO\\xFD\\xD0n\\xDF\\x96;|f\\xD5n\\xFA\\xE9\\xE7l\\xDB\\x1CN\\x83\\xF1\\xF0\\xCB\\xAF\\xCBB\\x17\\xB3\\x97f5<.\\x0B\\xB3x\\xDD\\xEF\\x9F\\xE3\\x1B\\xAF\\xBB\\x1Dw0\\xDFw0\\x17v\\x98\\x1F?h:\\xC4\\xFBr(oo\\xBA\\xF6e\\xD6M\\x9F\\xD8\\xEF\\xCB\\xC3y\\xA4\\xAE\\xCD\\x0F\\xE6^\\\\i7~i\\xD5a\\xDB\\x0F\\x87\\x8D\\xA7]"
		"\\xC6\\xA0\\x1F\\xDF}\\xBE]\\xDC\\xCC\\x9F\\x0F\\xAB\\x7F\\xDF\\xE2\\xE3\\xF9\\x16*\\xDD\\xE2\\xEE|\\x0B\\xFD\\xB6\\xC5|\\x1C\\xEAm2-\\x99L\\x9F\\xACg\\xB2\\x99N3\\x9BMs\\x9A\\xB9\\x1F\\xCFa$s\\x98\\x93\\xF5|6\\xC7i\\x16\\xB29\\xCC\\xE59\\xACd\\x0E{\\xB2^\\xCC\\xE68\\xCD(\\x9B\\xC3^\\x9E\\xC3I\\xE6p\\xA7gB~\\xB2$a~\\x9E\\xB8\\xCB\\x93x\\xC9$\\xFE\\xF4\\xC3t6I\\x12f\\xE7\\xCF\\x9D\\xBF<I\\x90L\\x12N?,;!?&\\xA1\\xCB&\t\\x97'\\x89\\x92I\"hM\\x04\\xAD\\x89\\x97\\xE7 "
		"\\xC9\\x1C\\x04ZC\\xA05ty\\x0E\\xB5\\x10\\x01n\\x01z\\x93\\x84yq\\x92\\xF0\\xFFf\\x91\\xC1V\\xA1\\xEE\\xA4\\xE9\\x19d\\x15c\\x1A\\x11`\\x95F\\xFDI\\xD3\\xBC@\\x8AAY%\\xC2\\xAC2\\xA8Ci\\x9A\\x97H1X\\xABD\\xB0U\\x16\\xF4(\t\\xF3\")\\x06o\\x95\\x08\\xB8\\xCA\\x81.%a^&\\xC5 \\xAE\\x12!Wy\\xD4&\\x8F\\xDA\\xC4`\\xAE\\x12AW\\x05\\xD8\\xA6\\x00\\xDB\\xC4\\xE0\\xAE\\x12\\x81WE\\xD8\\xA6\\x08\\xDB\\xC4\\xA0\\xAF\\x12\\xE1W\\x11l\\x13\\xC161\\x18\\xACE\\x0C\\xD6\\x0B\\xD0\\xA6$"
		"<\\xFBg\\x8E\\xC1`-b\\xB0V\\xA0MI\\x98\\xB7I3\\x08\\xACe\\xFF\\xE2j\\xD0\\xA6$\\xCC\\xDB\\xA4\\x19\\xFC\\xD5\"\\xFEj\\x83\\xDA\\x94\\xA6y\\x9B4\\x83\\xBFZ\\xC4_mQ\\x9B\\xD24o\\x93f\\x10X\\x8B\\x08\\xAC\\x1DjS\\x9A\\xE6m\\xD2\\x0C\\x06k\\x11\\x83\\xB5\\x87\\x7F)\\x0F\\xFFR\\x0C\n"
		"k\\x11\\x85u@\\xDD\\x0E\\xA8\\xDB\\x0C\\x06k\\x11\\x83uD\\xDD\\x8E\\xA8\\xDB\\x0C\\x02k\\x11\\x815\\xA1n\\x13\\xEA6\\x83\\xBFF\\xC4_\\xB3@gL\\x9A\\xE6g\\x8Ca\\x10\\xD8\\x88\\x08l\\x14\\xEAv\\x9A\\xE6\\xDD6\\x0C\\x06\\x1B\\x11\\x83\\x8DF\\xDDN\\xD3\\xBC\\xDB\\x86s\\xADAv\\xB1\\xC1\\x806%a\\xDE&\\xC3`\\xB0\\x111\\xD8X\\xD0\\xA6$<\\xBB\\xF4\\xC1 \\xB0\\x11\\x11\\xD88\\xD0\\xA6$\\xCC\\xDBd\\x18\\xFC5\"\\xFE\\x1A\\xC8_\\x03\\xF9k\\x18\\xFC5\"\\xFE\\x9A\\x00\\xDB\\x14`\\x9B\\x18\\x046\""
		"\\x02\\x9B\\x08\\xDB\\x14a\\x9B\\x18\\x0C6\"\\x06\\x1BBm\"\\xD4&\\x06\\x83\\xAD\\x88\\xC1v\\x01\\xDA\\x94\\x84y\\x9B,\\x83\\xC0VD`\\xAB@\\x9B\\x92\\xF0\\xECb\"\\x83\\xBFV\\xC4_\\xABQ\\x9B\\xD24o\\x93e\\xF0\\xD7\\x8A\\xF8k\rjS\\x9A\\xE6m\\xB2\\x0C\\x02[\\xD9%_\\x8B\\xDA\\x94\\xA6y\\x9B,\\x83\\xC1V\\xC4`\\xEB@\\x9B\\x920o\\x93e0\\xD8\\x8A\\x18l=j\\x93Gmb\\x10\\xD8\\x8A\\x08l\\x03jS@mb\\xF0\\xD7\\x8A\\xF8k#lS\\x84mb\\xF0\\xD7\\x8A\\xF8k\t\\xB6\\x89`\\x9B\\x18\\x04v\""
		"\\x02\\xBB\\x05jS\\x9A\\xE6mr\\x0C\\x06;\\x11\\x83\\x1D\\xBC\\x16\\xEC\\xE0\\xB5`\\xC7\\xA0\\xB0\\x13Q\\xD8!\\xDB\\xE6\\x90ns\\x0C\\x06;\\x11\\x83\\x1D2nI\\x98w\\xDB1\\x08\\xECD\\x04v\\xC8\\xBA9\\xA4\\xDD\\x1C\\xC7\\xBB\\xC9\\xC4\\x1B6oX\\xBD1\\x08\\xECD\\x04v\\xD0\\xBE9\\xA8\\xDF\\x1C\\x83\\xC1N\\xC4`\\x07\r\\x9C\\x83\n\\xCE1(\\xECD\\x14v\\xC8\\xC29\\xA4\\xE1\\x1C\\x83\\xC1N\\xC4`\\x87L\\x9CC*\\xCE1\\x08\\xECE\\x04\\xF6\\xC8\\xC5y\\xE4\\xE2<\\x83\\xBF^\\xC4_\\x0F\\xF9\\xEB!\\x7F=\\x83\\xBF^"
		"\\xC4_\\x0F]\\x9C\\x87.\\xCE3\\x08\\xECE\\x04\\xF6\\xD0\\xC5\\xA5i\\xDE&\\xCF`\\xB0\\x171\\xD8#\\x17\\xE7\\x91\\x8B\\xF3\\x0C\\x06{\\x11\\x83=rq\\x1E\\xB98\\xCF\\xB9\\xFBAv\\xFB\\x03rq\\x1E\\xB98\\xCF\\xE0\\xAF\\x17\\xF1\\xD7C\\x17\\xE7\\xA1\\x8B\\xF3\\x0C\\xFEz\\x11\\x7F=tq\\x1E\\xBA8\\xCF \\xB0\\x17\\x11\\xD8C\\x17\\xE7\\xA1\\x8B\\xF3\\x0C\\x06\\x07\\x11\\x83\\x03rq\\x01\\xB9\\xB8\\xC0`p\\x1018 "
		"\\x17\\x17\\x90\\x8B\\x0B\\x0C\\x02\\x07\\x11\\x81\\x03rq\\x01\\xB9\\xB8\\xC0\\xE0o\\x10\\xF17@\\x17\\x97\\xA6y\\x9B\\x02\\x83\\xBFA\\xC4\\xDF\\x00]\\\\\\x80..0\\x08\\x1CD\\x04\\x0E\\xD0\\xC5\\x05\\xE8\\xE2\\x02\\x83\\xC1A\\xC4\\xE0\\x00\\xAF\\x05\\x07x-8p\\xEEB\\x93\\xDD\\x86\\x86\\\\\\\\@..0\\x18\\x1CD\\x0C\\x0E\\xC8\\xC5\\x05\\xE4\\xE2\\x02\\x83\\xC0AD\\xE0\\x80\\\\\\\\@..0\\xF8\\x1BE\\xFC\\x8D\\xD0\\xC5E\\xE8\\xE2\"\\x83\\xC0QD\\xE0\\x08]\\\\\\x84..2\\x18\\x1CE\\x0C\\x8E\\xD0\\xC5E\\xE8\\xE2\""
		"\\x83\\xC2QD\\xE1\\x88\\\\\\\\\\x12\\x9E\\xDDL\\xC9`p\\x1418\"\\x17\\x17\\x91\\x8B\\x8B\\x0C\\x02G\\x11\\x81#rq\\x11\\xB9\\xB8\\xC8\\xE0o\\x14\\xF17B\\xFEF\\xC8\\xDF\\xC8\\xE0o\\x14\\xF17B\\x17\\x17\\xA1\\x8B\\x8B\\x9C;\\x81e\\xB7\\x02C\\x17\\x17\\xA1\\x8B\\x8B\\x0C\\x06G\\x11\\x83#rq\\x11\\xB9\\xB8\\xC8`0\\x89\\x18L\\xC8\\xC5\\x11rq\\xC4 0\\x89\\x08L\\xC8\\xC5\\x11rq\\xC4\\xE0/\\x89\\xF8K\\xD0\\xC5\\x11tq\\xC4\\xE0/\\x89\\xF8K\\xD0\\xC5\\xA5i\\xDE&b\\x10\\x98D\\x04&"
		"\\xE8\\xE2\\x08\\xBA8b0\\x98D\\x0C&\\xE4\\xE2\\x08\\xB98b0\\x98D\\x0C&\\xE4\\xE2\\x08\\xB98b\\x10\\x98D\\x04&\\xE4\\xE2\\x08\\xB98b\\xF0\\x97D\\xFC%\\xE8\\xE2\\x08\\xBA8b\\xF0\\x97d\\x0Fd@\\x17G\\xD0\\xC5\\x11\"\\xF0\\xFC\\xE4\t\\xB4}\\xF9P\\xFF^v\\x0F\\xCD\\xAE\\x9Fm\\xEA\\xF54\\xC3\\xF8\\xBDv\\xC7\\xC7\\xE3\\xA6\\xDF\\x87v?\\xFD6\\x9E\\x86\\x9F\\xDBah\\xB7\\xAF\\xAF\\x1E\\xEBrUw\\x87W\\xE3\\xB1\\xAC\\xDBvx}1?\\xAE\\xFBW=<\\xEDgm\\xD7\\x8C\\xC76=\\xA3\\xB8,\\xF6m7te3\\x8C;"
		"\\x8F\\xEF\\xFF\\xDB\\x8E\\xC1\\xE6~\\xDF\\x1CnA K>\\xE8\\xC3\\xC9\\xFE\\\\wCS\\xFD \\xE8\\xC77\\xEB\\xC3\\xE3$#\\xD3\\xD7\\xCD\\xF0\\xA9}{\\xBA\\xEE\\xF82y\\xAAo\\xFE\\xF6\\x90\\xE6\\xED\\x7FPK\\x03\\x04\n\\x00\\x00\\x00\\x08\\x00\\xBC4\\xABR\\xC2\\xA1\\xBD\\xBE\\xF1\\x06\\x00\\x00x;\\x00\\x00\\x18\\x00\\x00\\x00xl/worksheets/sheet2.xml\\x95\\xDB]o\\xA3F\\x14\\x06\\xE0\\xFB\\xFE\n\\xC4\\xFD\\x06\\xCF\\xF7L\\x14g\\xB5\\xDDh\\xD5J\\xADT\\xB5"
		"[\\xF5\\x9A\\xC58Fk\\x8C\\x05$\\xD9\\xF4\\xD7\\x17\\xE3$\\xF2\\x0C\\xD1\\xDBsn\\xA2\\xC0\\x81\\xE1\\xE0\\x19=\\xBBy\r7\\x1F\\x7F\\xB4\\xFB\\xEC\\xB1\\xEE\\x87\\xA6;\\xACsq\\xB5\\xCA\\xB3\\xFAPu\\x9B\\xE6p\\xBF\\xCE\\xFF\\xFE\\xFA\\xE5\\x83\\xCF\\xB3a,\\x0F\\x9Br\\xDF\\x1D\\xEAu\\xFE\\\\\\x0F\\xF9\\xC7\\xDB\\x9Fn\\x9E\\xBA\\xFE\\xFB\\xB0\\xAB\\xEB1\\x9B\\x068\\x0C\\xEB|7\\x8E\\xC7\\xEB\\xA2\\x18\\xAA]\\xDD\\x96\\xC3Uw\\xAC\\x0FSe\\xDB\\xF5m9N\\x9B\\xFD}"
		"1\\x1C\\xFB\\xBA\\xDC\\xCC'\\xB5\\xFBB\\xAEV\\xB6h\\xCB\\xE6\\x90\\x9FG\\xB8\\xEE)ct\\xDBmS\\xD5w]\\xF5\\xD0\\xD6\\x87\\xF1<H_\\xEF\\xCBqj\\x7F\\xD85\\xC7\\xE1u\\xB4\\xB6\\xA2\\x0C\\xD7\\x96\\xFD\\xF7\\x87\\xE3\\x87\\xAAk\\x8F\\xD3\\x10\\xDF\\x9A}3>\\xCF\\x83\\xE6Y[]\\xFFz\\x7F\\xE8\\xFA\\xF2\\xDB~\\xBA\\xED\\x1FB\\x97\\xD5\\xEB\\xD8\\xF3\\xC6b\\xF8\\xB6\\xA9\\xFAn\\xE8\\xB6\\xE3\\xD54\\xDCK\\xA3\\xCB{\\x0EE(\\xA6\\x91no6\\xCDt\\x07\\xA7O=\\xEB\\xEB\\xED:\\xFF$\\xAE?"
		"\\x07\\x97\\x17\\xB77\\xF3\\xC1_\\xE6&\\xFF\\xE8\\xB3M\\xBD-\\x1F\\xF6\\xE3\\x9F\\xDD\\xD3/us\\xBF\\x1B\\xA792y\\xD6=\\x8C\\xFB\\xE6P\\xFFV?\\xD6\\xFB\\xA9\\xB4\\xCEW\\xF1\\xBE\\xCF\\xDD~\\xDE7wz\\xBDy\\xBE\\xAB\\x87j\\xFA\\xBC\\xD6\\xB9\\x99N\\xAE\\x1E\\x86\\xB1k\\xDF\\x86;]\\xB3\\xEA\\xF6\\xC3\\xFC3k\\x9B\\xD32\\x98n\\xBF\\xFC\\xB1\\xCEe\\x9E=5\\x9Bq\\xB7\\xCE\\xD5\\xEA\\xF5\\xBC\\x7F\\xCE;^O;\\x9F\\xA0^NP\\xD1\t\\xC3\\xF8|\\xFA\\xEC\\xE4{\\xA7\\x16\\xE7K\\xCE7{W\\x8E\\xE5\\xEDM\\xDF=e\\xFD|"
		"\\xED\\xE1X\\x9EV\\x94\\xB8V\\xEF\\xDC\\xC1\\xEAJ\\x9A\\xE9\\xE3\\xABN\\xC7~:\\x1D<\\x9F2\\x15\\x86i\\xEF\\xE3\\xAD\\xB07\\xC5\\xE3i\\xF8\\x97C~~\\xE7\\x10\\x17\\x1F\\xF2yy\\x88|;\\xA2\\x98\\xDAz\\xEBMrz\\x93\\x97\\x97\\xF4IWQ1$\\xFD\\xC8\\xB9\\x9F\\xCBC\\xCC\\xFB\\xFD(N?\\xEA\\xF2\\xFEVI?QQ$\\xFD(j?\\x9A\\xD3\\x8F\\xBE\\xBC\\xA4L\\xFA\\x89\\x8A*\\xE9GS\\xFB1\\x9C~\\xCC\\xE5%u\\xD2OT4I?\\x86\\xDA\\x8F\\xE5\\xF4c//"
		"\\x99\\xAE\\xEA\\xA8\\x98\\xAEgK\\xED\\xC7q\\xFAq\\x97\\x97L\\xD7sTL\\xD7\\xB3\\xA3\\xF6\\xE39\\xFD\\xF8\\x8B\\xF1T\\xBA\\x9E\\xA3b\\xBA\\x9E=\\xB5\\x9F\\xC0\\xE9'\\\\^2]\\xCFQ1]\\xCF\\x81\\xDA\\x8FX\\xB1p\\\\!\\x81\\xE2j:e\\xF3\\x95h=\\xF1\\xC0\\x16H\\xA1\\xB8\\x9AN\\x9B\\x10\\xE4\\x9EXP\\x0B\\x89$\\x8A\\xAB\\xE9\\xD4\t\\xB2\\xD5\\x82\\x85\\xB5PH\\xA3\\xB8\\x9Ar$\\xC8^"
		"\\x0B\\x16\\xD8B#\\x91\\xE2\\xEA\\xE2\\x9FX\\xB2\\xD9\\x82\\x85\\xB60H\\xA5\\xB8\\xBAX\\xE3d\\xB7\\x05\\x0Bna\\x91Lqu\\xB1\\xC6\\xC9v\\x0B\\x16\\xDE\\xC2!\\x9D\\xE2\\xEAb\\x8D\\x93\\xFD\\x16,\\xC0\\x85\\x87>y\\xE8\\x13\\xD9p\\xC1B\\\\\\x04\\xE8S\\x80>\\x91\\x1D\\x97,\\xC7\\xE5\n\\xF9\\x14W\\xD3\\xB9\\x93d\\xC7%\\xCBq)\\x90Oq5\\xF5I\\x92\\x1D\\x97\\xBC\\xFFpK\\xE4S\\\\M}\\x92d\\xC7%\\xCBq\\xA9\\x90Oqu\\xF1g\\x00\\xD9q\\xC9r\\\\j\\xE4S\\\\M\\xD7\\xB8$;.Y\\x8EK\\x83|"
		"\\x8A\\xAB\\x8B5Nv\\\\\\xB2\\x1C\\x97\\x16\\xF9\\x14W\\x17sGv\\\\\\xB2\\x1C\\x97\\x0E\\xF9\\x14W\\x17sGv\\\\\\xB2\\x1C\\x97\\x1E\\xFA\\xE4\\xA1Od\\xC7%\\xCBq\\x19\\xA0O\\x01\\xFADv\\\\\\xB1\\x1CW+\\xE4S\\\\M}Rd\\xC7\\x15\\xCBq%\\x90Oq5]\\xE3\\x8A\\xEC\\xB8b9\\xAE$\\xF2)\\xAE.\\xA2\nzv\\xC2\\x0BO\\x14\\xF2)\\xAE\\xA6k\\\\\\x91\\x1DW,\\xC7\\x95F>\\xC5\\xD5\\xC5\\xDC\\x91\\x1DW,\\xC7\\x95A>\\xC5\\xD5\\xC5\\xDC\\x91\\x1DW,\\xC7\\x95E>\\xC5\\xD5\\xC5\\xDC\\x91\\x1DW,\\xC7\\x95C"
		">\\xC5\\xD5\\xD4'Ev\\\\\\xB1\\x1CW\\x1E\\xFA\\xE4\\xA1Od\\xC7\\x15\\xCBq\\x15\\xA0O\\x01\\xFADv\\\\\\xB3\\x1C\\xD7+\\xE4S\\\\M\\xD7\\xB8&;\\xAEY\\x8Ek\\x81|\\x8A\\xAB\\x8B8\\x95\\xEC\\xB8f9\\xAEa\\x02\\x1EW\\xD3\\xB9\\xD3d\\xC75\\xCBq\rS\\xF0\\xB8\\xBA\\x98;z\\x0E\\xCE\\x0B\\xC2q\\x12\\x8E\\xA3p\\xB2\\xE3\\x9A\\xE5\\xB8\\x86i\\xB8\\x86q\\xB8&;\\xAEY\\x8Ek\\x98\\x88k\\x18\\x89k\\xB2\\xE3\\x9A\\xE5\\xB8\\x86\\xA9\\xB8\\x86\\xB1\\xB8&;"
		"\\xAEY\\x8Ek\\x98\\x8Ck\\x18\\x8Dk\\xB2\\xE3\\x9A\\xE5\\xB8\\x86\\xE9\\xB8\\x86\\xF1\\xB8&;nX\\x8E\\x1B\\x98\\x8F\\x1B\\x98\\x8F\\x1B\\xB2\\xE3\\x86\\xE5\\xB8\\x81\\xF9\\xB8\\x81\\xF9\\xB8!;nX\\x8E\\x1B\\x98\\x8F\\xC7\\xD5t\\xEE\\x0C\\xD9q\\xC3r\\xDC\\xC0|<\\xAE.\\xBE\\xAE#;nX\\x8E\\x1B\\x98\\x8F\\x1B\\x98\\x8F\\x1B\\xFAw\\x9A\\xBC/5a>n`>n\\xC8\\x8E\\x1B\\x96\\xE3\\x06\\xE6\\xE3\\x06\\xE6\\xE3\\x86\\xEC\\xB8a9n`>n`>n\\xC8\\x8E\\x1B\\x96\\xE3\\x06\\xE6\\xE3\\x06\\xE6\\xE3\\x86\\xEC\\xB8a9n`>n`"
		">n\\xC8\\x8E[\\x96\\xE3\\x16\\xE6\\xE3\\x16\\xE6\\xE3\\x96\\xEC\\xB8e9na>na>n\\xC9\\x8E[\\x96\\xE3\\x16\\xE6\\xE3qu\\xF1H\\x01\\xD9q\\xCBr\\xDC\\xC2|<\\xAE\\xA6k\\xDC\\x92\\x1D\\xB7,\\xC7-\\xCC\\xC7-\\xCC\\xC7-\\xD9q\\xCBr\\xDC\\xC2|\\xDC\\xC2|\\xDC\\xD2\\x9FO\\xE1="
		"\\xA0\\x02\\xF3q\\x0B\\xF3qKv\\xDC\\xB2\\x1C\\xB70\\x1F\\xB70\\x1F\\xB7d\\xC7-\\xCBq\\x0B\\xF3q\\x0B\\xF3qKv\\xDC\\xB2\\x1C\\xB70\\x1F\\xB70\\x1F\\xB7d\\xC7\\x1D\\xCBq\\x07\\xF3q\\x07\\xF3qGv\\xDC\\xB1\\x1Cw0\\x1Fw0\\x1Fwd\\xC7\\x1D\\xCBq\\x07\\xF3\\xF1\\xB8\\x9A\\xAEqGv\\xDC\\xB1\\x1Cw0\\x1F\\x8F\\xAB\\xE9\\x1Awd\\xC7\\x1D\\xCBq\\x07\\xF3q\\x07\\xF3qGv\\xDC\\xB1\\x1Cw0\\x1Fw0\\x1Fwd\\xC7\\x1D\\xCBq\\x07\\xF3q\\x07\\xF3qG\\x7F\\xD6\\x90\\xF7\\xB0"
		"!\\xCC\\xC7\\x1D\\xCC\\xC7\\x1D\\xD9q\\xC7r\\xDC\\xC1|\\xDC\\xC1|\\xDC\\x91\\x1Dw,\\xC7\\x1D\\xCC\\xC7\\x1D\\xCC\\xC7\\x1D\\xD9q\\xCFr\\xDC\\xC3|\\xDC\\xC3|\\xDC\\x93\\x1D\\xF7,\\xC7=\\xCC\\xC7=\\xCC\\xC7=\\xD9q\\xCFr\\xDC\\xC3|<\\xAE\\xA6s\\xE7\\xC9\\x8E{\\x96\\xE3\\x1E\\xE6\\xE3qu1wd\\xC7=\\xCBq\\x0F\\xF3q\\x0F\\xF3qOv\\xDC\\xB3\\x1C\\xF70\\x1F\\xF70\\x1F\\xF7d\\xC7=\\xCBq\\x0F\\xF3q\\x0F\\xF3qOv\\xDC\\xB3\\x1C\\xF70\\x1F\\xF70\\x1F\\xF7\\xF4\\xE7\\xC6y\\x0F\\x8E\\xE3'\\xC7\\xF1\\xA3\\xE3d\\xC7="
		"\\xCBq\\x0F\\xF3q\\x0F\\xF3qOv<\\xB0\\x1C\\x0F0\\x1F\\x0F0\\x1F\\x0Fd\\xC7\\x03\\xCB\\xF1\\x00\\xF3\\xF1\\x00\\xF3\\xF1@v<\\xB0\\x1C\\x0F0\\x1F\\x8F\\xAB\\x8BG\\xFF\\xC9\\x8E\\x07\\x96\\xE3\\x01\\xE6\\xE3q5\\xF5)\\x90\\x1D\\x0F,\\xC7\\x03\\xCC\\xC7\\x03\\xCC\\xC7\\x03\\xD9\\xF1\\xC0r<\\xC0|<\\xC0|<\\x90\\x1D\\x0F,\\xC7\\x03\\xCC\\xC7\\x03\\xCC\\xC7\\x03\\xD9\\xF1\\xC0r<\\xC0|<\\xC0|<\\xFC\\xBF\\xE3\\xC5\\xC5{\\x80\\xC7\\xF2\\xBE\\xFE\\xBD\\xEC\\xEF\\x9B\\xC3\\x90\\xED\\xEB\\xED\\xDC\\xC94B\\x7F~]"
		"q\\xFE}\\xEC\\x8E\\xF3o\\xD3\\x04|\\xEB\\xC6\\xB1k_\\xB7vu\\xB9\\xA9\\xFB\\xD3\\xD6tG\\xDB\\xAE\\x1B_7\\x8A\\xF3\\xB8\\x7F\\xD5\\xE3\\xC31\\xEB\\xFAf\\xBA\\xC3\\xF9\\x9D\\xD1u~\\xEC\\xFA\\xB1/\\x9Bq:y\\xDA\\xFFo7\\x15\\xF6w\\xC7\\xE6\\xF4\\xB0C\\xD0\\xC1:y\\x9A\\xE6\\xC7\\xBA\\x1F\\x9B\\xEA\\x9D\\xC20\\xED\\xACO/\\xE6L\\xDEm\\x9B\\xF1k\\xF7\\xF6\\x8E\\xE3y3z\\xCB\\xB2x{i\\xF6\\xF6?PK\\x03\\x04\n\\x00\\x00\\x00\\x08\\x00\\xBC4\\xABR\\xCF\\x9E#\\xE0\\xDE\\x06\\x00\\x00v;"
		"\\x00\\x00\\x18\\x00\\x00\\x00xl/worksheets/sheet3.xml\\x95\\xDB]o\\xA3F\\x14\\x06\\xE0\\xFB\\xFE\n\\x8B\\xFB\\x8D=\\xDF3Q\\x9C\\xD5n\\xA2\\xAA\\x95Z\\xA9j\\xB7\\xEA5\\x8Bq\\x8C\\xD66\\x16\\x90d\\xD3__\\x8C7\\x113\\x13\\xBD=\\xE7&\n\\x1C\\x18\\x0E\\xF6\\xABG\\xA31\\xDC|\\xFC~\\xD8/\\x9E\\xEA\\xAEo\\xDA\\xE3\\xBA\\x10W\\xABbQ\\x1F\\xABv\\xD3\\x1C\\x1F\\xD6\\xC5\\xDF_~\\xFE\\xE0\\x8BE?"
		"\\x94\\xC7M\\xB9o\\x8F\\xF5\\xBAx\\xA9\\xFB\\xE2\\xE3\\xEDO7\\xCFm\\xF7\\xAD\\xDF\\xD5\\xF5\\xB0\\x18\\x078\\xF6\\xEBb7\\x0C\\xA7\\xEB\\xE5\\xB2\\xAFv\\xF5\\xA1\\xEC\\xAF\\xDAS}\\x1C+\\xDB\\xB6;\\x94\\xC3\\xB8\\xD9=,\\xFBSW\\x97\\x9B\\xE9\\xA4\\xC3~)W+\\xBB<\\x94\\xCD\\xB1\\xB8\\x8Cp\\xDDQ\\xC6h\\xB7\\xDB\\xA6\\xAA\\xEF\\xDB\\xEA\\xF1P\\x1F\\x87\\xCB ]\\xBD/\\x87\\xB1\\xFD~\\xD7\\x9C\\xFA\\xD7\\xD1\\x0E\\x15e\\xB8C\\xD9}{<}\\xA8\\xDA\\xC3i\\x1C\\xE2k\\xB3o\\x86\\x97i\\xD0bq\\xA8\\xAE\\x7F}8\\xB6]"
		"\\xF9u?\\xDE\\xF6w\\xA1\\xCB\\xEAu\\xECi#\\x1B\\xFE\\xD0T]\\xDB\\xB7\\xDB\\xE1j\\x1C\\xEEG\\xA3\\xF9=\\x87eX\\x8E#\\xDD\\xDEl\\x9A\\xF1\\x0E\\xCE\\x9F\\xFA\\xA2\\xAB\\xB7\\xEB\\xE2\\x93\\xB8\\xBE\\x0B\\xAEX\\xDE\\xDEL\\x07\\xFF<5\\xF9G\\xB7\\xD8\\xD4\\xDB\\xF2q?\\xFC\\xD9>\\xFFR7\\x0F\\xBBa\\xFC\\x8EL\\xB1h\\x1F\\x87}s\\xAC\\x7F\\xAB\\x9F\\xEA\\xFDXZ\\x17\\xABx\\xDF]\\xBB\\x9F\\xF6M\\x9D^o^\\xEE\\xEB\\xBE\\x1A?\\xAFua\\xC6\\x93\\xAB\\xC7~h\\x0Fo\\xC3\\x9D\\xAFY\\xB5\\xFB~"
		"\\xFA\\xBB84\\xE7\\x18\\x8C\\xB7_~_\\x17\\xB2X<7\\x9Ba\\xB7.\\xD4\\xEA\\xF5\\xBC\\x7F.;^O\\xBB\\x9C\\xA0~\\x9C\\xA0\\xA2\\x13\\xFA\\xE1\\xE5\\xFC\\xD9\\xC9\\xF7N]^.9\\xDD\\xEC}9\\x94\\xB77]\\xFB\\xBC\\xE8\\xA6k\\xF7\\xA7\\xF2\\x9C(q\\xAD\\xDE\\xB9\\x83\\xD5\\x954\\xE3\\xC7W\\x9D\\x8F\\xFDt>x:e,\\xF4\\xE3\\xDE\\xA7[q\\xB3|:\\x8F\\xFE\\xE3\\x88\\xCF\\xF9\\x11\\xAB\\xF8\\x88\\xBB\\xFC\\x08\\xF9v\\xC4rl\\xEA\\xAD3\\xC9\\xE9L\\xCE\\xC6S:i**\\x9A\\xA4\\x1F9\\xF53?"
		"\\xC4\\xBC\\xDF\\x8F\\xE2\\xF4\\xA3\\xE6\\x97\\xB4I?Q\\xD1%\\xFD(j?\\x9A\\xD3\\x8F\\x9E_\\xD2'\\xFDD\\xC5\\x90\\xF4\\xA3\\xA9\\xFD\\x18N?f6\\x9EN\"\\xF29*&\t\\xBB3\\xD4~,\\xA7\\x1F;\\xBF\\xA4L\\xFA\\x89\\x8A*\\xE9\\xC7R\\xFBq\\x9C~\\xDC\\xFC\\x92i\\x9E\\xA3b\\x9AgG\\xED\\xC7s\\xFA\\xF1\\xF3K\\xA6y\\x8E\\x8Ai\\x9E=\\xB5\\x9F\\xC0\\xE9'\\xCC/\\x99\\xE69*\\xA6y\\x0E\\xD4~\\xC4\\x8AE\\xE3j>b\\x9A\\xE8\\xB8\\x9AFz\\xBA\\x12\\xAD'\\x1E\\xD7seM\\x9A\\xEA\\xB8\\x9A\\xC6Z\\x08rO,"
		"\\xA8\\x05\\x94Z@\\xAA\\x05\\xD9j\\xC1\\xC2Z@\\xAD\\x05\\xE4Z\\x90\\xBD\\x16,\\xB0\\x05\\x14[@\\xB2\\x05\\xD9l\\xC1B[@\\xB5\\x05d[\\x90\\xDD\\x16,\\xB8\\x05\\x94[@\\xBA\\x05\\xD9n\\xC1\\xC2[@\\xBD\\x05\\xE4[\\x90\\xFD\\x16,\\xC0\\x05\\x14\\\\@\\xC2\\x05\\xD9p\\xC1B\\\\@\\xC5\\x05d\\\\\\x90\\x1D\\x97,\\xC7%t\\\\B\\xC7%\\xD9q\\xC9r\\\\B\\xC7%t\\\\\\x92\\x1D\\x97\\xBC\t7\\x9Eq\\xE3)7\\xD9q\\xC9r\\\\B\\xC7%t\\\\\\x92\\x1D\\x97,\\xC7%t\\\\B\\xC7%\\xD9q\\xC9r\\\\B\\xC7%t\\\\\\x92\\x1D\\x97,"
		"\\xC7\\xA5\\x85y\\xB20Od\\xC7%\\xCBq\\xE9`\\x9E\\x1C\\xCC\\x13\\xD9q\\xC9r\\\\z\\x98'\\x0F\\xF3Dv\\\\\\xB2\\x1C\\x97\\x01\\xE6)\\xC0<\\x91\\x1DW,\\xC7\\xD5\\\\\\xEAl^\\x10WS3\\x15\\xD9q\\xC5r\\\\\\xCD\\xA5\\xCE\\xE6\\x05q5\\xCD\\xB8\";\\xAEX\\x8E\\xAB\\xF9\\x88\\xD9\\xBC \\xAEfK\\x15\\xF4\\xB5\\x13\\xDE\\xE2\\xC9\\\\\\xEAl^\\x10W\\xD3\\x8C+"
		"\\xB2\\xE3\\x8A\\xE5\\xB8\\x9AK\\x9D\\xCD\\x0B\\xE2j\\x9AqEv\\\\\\xB1\\x1CWs\\xA9\\xB3yA\\\\\\xCD2Nv\\\\\\xB1\\x1CW\\xD0q\\x05\\x1DWd\\xC7\\x15\\xCBq\\x05\\x1DW\\xD0qEv\\\\\\xB1\\x1CW\\xD0q\\x05\\x1DWd\\xC7\\x15\\xCBq\\x05\\x1DW\\xD0qEv\\\\\\xB3\\x1C\\xD7\\xD0q\r\\x1D\\xD7d\\xC75\\xCBq\r\\x1D\\xD7\\xD0qMv\\\\\\xB3\\x1C\\xD7\\xD0q\r\\x1D\\xD7d\\xC75\\xCBq\r\\x1D\\xD7\\xD0qM_\\x07\\xE7-\\x84C\\xC75t\\\\\\x93\\x1D\\xD7,\\xC75t\\\\C\\xC75\\xD9q\\xCDr\\\\C\\xC75t\\\\\\x93\\x1D\\xD7,"
		"\\xC75t\\\\C\\xC75\\xD9q\\xCDr\\\\C\\xC75t\\\\\\x93\\x1D\\xD7,\\xC75t\\\\C\\xC75\\xD9q\\xC3r\\xDC\\xACP\\x9E\\xE2j\\x9A'Cv\\xDC\\xB0\\x1C7\\x02\\xE5)\\xAE\\xA6y2d\\xC7\r\\xCBq#Q\\x9E\\xE2j\\x9A'Cv\\xDC\\xB0\\x1C7\n\\xE5)\\xAEf?\\xD7\\x91\\x1D7,\\xC7\\xCD\\\\\\xEAl^\\x10WS3\r\\xFD7M\\xDE\\x8F\\x9A\\xD1\\xCAI\\x96\\xF1\\xA8\\x9Ae\\x9C\\xEC\\xB8a9n\\xA2\\x15\\xF0,\\xE3Q5\\xCB8\\xD9q\\xC3r\\xDCD+"
		"\\xE0Y\\xC6\\xA3j\\x96q\\xB2\\xE3\\x86\\xE5\\xB8\\x99K\\x9D\\xCD\\x0B\\xE2j\\x96q\\xB2\\xE3\\x86\\xE5\\xB8\\x99K\\x9D\\xCD\\x0B\\xE2j\\x96q\\xB2\\xE3\\x96\\xE5\\xB8\\x85\\x8E[\\xE8\\xB8%;nY\\x8E[\\xE8\\xB8\\x85\\x8E[\\xB2\\xE3\\x96\\xE5\\xB8\\x85\\x8E[\\xE8\\xB8%;nY\\x8E[\\xE8\\xB8\\x85\\x8E[\\xB2\\xE3\\x96\\xE5\\xB8\\x85\\x8E[\\xE8\\xB8%;nY\\x8E[\\xE8\\xB8\\x85\\x8E[\\xFA\\xF3)\\xBC\\x07T\\xA0\\xE3\\x16:n\\xC9\\x8E[\\x96\\xE3\\x16:n\\xA1\\xE3\\x96\\xEC\\xB8e9n\\xA1\\xE3\\x16:n\\xC9\\x8E"
		"[\\x96\\xE3\\x16:n\\xA1\\xE3\\x96\\xEC\\xB8c9\\xEE\\xA0\\xE3\\x0E:\\xEE\\xC8\\x8E;\\x96\\xE3\\x0E:\\xEE\\xA0\\xE3\\x8E\\xEC\\xB8c9\\xEE\\xA0\\xE3\\x0E:\\xEE\\xC8\\x8E;\\x96\\xE3\\x0E:\\xEE\\xA0\\xE3\\x8E\\xEC\\xB8c9\\xEE4\\xCC\\x93\\x86y\";\\xEEX\\x8E;\\x03\\xF3d`\\x9E\\xC8\\x8E;\\x96\\xE3\\xCE\\xC2<Y\\x98'\\xFA\\xB3\\x86\\xBC\\x87\r\\x1D\\xCC\\x93\\x83y\";\\xEEX\\x8E\\xBB\\xE8\\x89\\x94\\xD4\\xCC\\xB8\\x9A\\x9A\\xE9\\xC8\\x8E;\\x96\\xE3.Z9\\xC92\\x1EU\\xB3\\x8C\\x93\\x1D\\xF7,\\xC7}"
		"\\xB4\\x02\\x9E=\\x99\\x19U\\xB3G3\\xC9\\x8E{\\x96\\xE3>Z\\x01O3\\x1EW\\xD3\\x8C{\\xB2\\xE3\\x9E\\xE5\\xB8\\x8FFL3\\x1EW\\xD3\\x8C{\\xB2\\xE3\\x9E\\xE5\\xB8\\x9FK\\x9D\\xCD\\x0B\\xE2j\\x9AqOv\\xDC\\xB3\\x1C\\xF7\\xD0q\\x0F\\x1D\\xF7d\\xC7=\\xCBq\\x0F\\x1D\\xF7\\xD0qOv\\xDC\\xB3\\x1C\\xF7\\xD0q\\x0F\\x1D\\xF7d\\xC7=\\xCBq\\x0F\\x1D\\xF7\\xD0qO\\x7Fn\\x9C\\xF7\\xE08t\\xDCC\\xC7=\\xD9q\\xCFr\\xDCC\\xC7=t\\xDC\\x93\\x1D\\x0F,\\xC7\\x03t<@\\xC7\\x03\\xD9\\xF1\\xC0r<@\\xC7\\x03t<\\x90\\x1D\\x0F,"
		"\\xC7\\x03t<@\\xC7\\x03\\xD9\\xF1\\xC0r<@\\xC7\\x03t<\\x90\\x1D\\x0F,\\xC7\\x03t<@\\xC7\\x03\\xD9\\xF1\\xC0r<@\\xC7\\x03t<\\x90\\x1D\\x0F,\\xC7\\x03t<@\\xC7\\x03\\xD9\\xF1\\xC0r<@\\xC7\\x03t<\\xFC\\xBF\\xE3\\xCB\\xD9[\\x80\\xA7\\xF2\\xA1\\xFE\\xBD\\xEC\\x1E\\x9Ac\\xBF\\xD8\\xD7\\xDB\\xA9\\x93q\\x84\\xEE\\xF2\\xB2\\xE2\\xF4\\xFF\\xD0\\x9E\\xA6\\xFF\\xC6/\\xE0k;\\x0C\\xED\\xE1ukW\\x97\\x9B\\xBA;o\\x8Dw\\xB4m\\xDB\\xE1ucy\\x19\\xF7\\xAFzx<-\\xDA\\xAE\\x19\\xEFpzct]"
		"\\x9C\\xDAn\\xE8\\xCAf\\x18O\\x1E\\xF7\\xFF\\xDB\\x8E\\x85\\xFD\\xFD\\xA99?\\xEC\\x10t\\xB0N\\x9E\\xBF\\xE6\\xA7\\xBA\\x1B\\x9A\\xEA\\x9DB?\\xEE\\xAC\\xCF/\\xE6\\x8C\\xDEm\\x9B\\xE1K\\xFB\\xF6\\x86\\xE3e3z\\xC7r\\xF9\\xF6\\xCA\\xEC\\xED\\x7FPK\\x03\\x04\n\\x00\\x00\\x00\\x08\\x00\\xBC4\\xABR[\\x95\\xD4~O\\x07\\x00\\x00\\xA0<\\x00\\x00\\x18\\x00\\x00\\x00xl/worksheets/sheet4.xml\\x95\\x9B\\xDDn\\xDBF\\x10\\x85\\xEF\\xFB\\x14\\x02\\xEFc\\x89\\xFB\\xBF\\x86\\xE5 \\xB1Q\\xB4@\\x0B\\x14m\\x8A^"
		"32e\\x13\\x91D\\x81\\xA4\\xED\\xB8O_\\x8A\\x8A\r\\xCE\\xAEq:s\\x13X:\\xE4rH\\x9E|\\x1E\\xCF!\\xAF>~\\xDF\\xEF\\x16Ou\\xD77\\xEDa]\\x94\\x17\\xABbQ\\x1F6\\xED]s\\xB8_\\x17\\x7F\\x7F\\xF9\\xF9C(\\x16\\xFDP\\x1D\\xEE\\xAA]{\\xA8\\xD7\\xC5K\\xDD\\x17\\x1F\\xAF\\x7F\\xBAzn\\xBBo\\xFDC]\\x0F\\x8Bq\\x81C\\xBF.\\x1E\\x86\\xE1x\\xB9\\\\\\xF6\\x9B\\x87z_\\xF5\\x17\\xED\\xB1>\\x8C\\xCA\\xB6\\xED\\xF6\\xD50~\\xEC\\xEE\\x97\\xFD\\xB1\\xAB\\xAB\\xBBi\\xA7\\xFDn\\xA9V+"
		"\\xB7\\xDCW\\xCD\\xA18\\xAFp\\xD9q\\xD6h\\xB7\\xDBfS\\xDF\\xB6\\x9B\\xC7}}\\x18\\xCE\\x8Bt\\xF5\\xAE\\x1A\\xC6\\xF2\\xFB\\x87\\xE6\\xD8\\xBF\\xAE\\xB6\\xDFp\\x96\\xDBW\\xDD\\xB7\\xC7\\xE3\\x87M\\xBB?\\x8EK|mv\\xCD\\xF02-Z,\\xF6\\x9B\\xCB_\\xEF\\x0FmW}\\xDD\\x8D\\xA7\\xFD\\xBD4\\xD5\\xE6u\\xED\\xE9C\\xB6\\xFC\\xBE\\xD9tm\\xDFn\\x87\\x8Bq\\xB9\\x1F\\x85\\xE6\\xE7\\x1C\\x97q9\\xAEt}u\\xD7\\x8Cgp\\xBA\\xEA\\x8B\\xAE\\xDE\\xAE\\x8BO\\xE5\\xE5M\\x8C\\xC5\\xF2\\xFAj\\xDA\\xF8\\xE7\\xA9\\xC8?\\xBA\\xC5]"
		"\\xBD\\xAD\\x1Ew\\xC3\\x9F\\xED\\xF3/us\\xFF0\\x8C\\xF7\\xC8\\x16\\x8B\\xF6q\\xD85\\x87\\xFA\\xB7\\xFA\\xA9\\xDE\\x8D\\xD2\\xBAX\\xD1\\xEFn\\xDA\\xDD\\xF4\\xDDT\\xE9\\xE5\\xDD\\xCBm\\xDDo\\xC6\\xEB\\xB5.\\xEC\\xB8\\xF3\\xE6\\xB1\\x1F\\xDA\\xFD\\xDBr\\xA7cn\\xDA]?\\xFD\\xBB\\xD87'\\x1B\\x8C\\xA7_}_\\x17\\xAAX<7w\\xC3\\xC3\\xBA\\xD0\\xAB\\xD7\\xFD\\xFE9\\x7F\\xF1\\xBA\\xDBy\\x07\\xFDc\\x07Mv\\xE8\\x87\\x97\\xD3\\xB5S\\xEF\\xED\\xBA<\\x1Fr"
		":\\xD9\\xDBj\\xA8\\xAE\\xAF\\xBA\\xF6y\\xD1M\\xC7\\xEE\\x8F\\xD5\\xC9Q\\xE5\\xA5~\\xE7\\x0CV\\x17\\xCA\\x8E\\x97os\\xDA\\xF6\\xD3i\\xE3i\\x97Q\\xE8\\xC7o\\x9F\\xAEK\\x7F\\xB5|:-\\xFFc\\x93\\xCF\\xEFl\\xE2\\xE8&7\\xF9&\\xEAm\\x8B\\xE5X\\xD6[mJR\\x9B\\x9A\\xADgMR\\x15\\x11mR\\x8F\\x9A\\xEA!\\x9B\\xBC_\\x8F\\x96\\xD4\\xA3\\xE7\\xEB%\\x97\\xE03\\x11\\x93Kx\\xA3\\xB9\\xF5\\x18I=f\\xBE^H\\xEA!bL\\xEA1\\xDCz\\xAC\\xA4\\x1E;[\\xCF\\xAD\\x92z\\x88X&\\xF5Xn=NR\\x8F\\x9B\\x1FR%\\xF5\\x10Q'\\xF58n=^"
		"R\\x8F\\x9F\\x1F2\\xF53\\x11S?{n=ARO\\x98\\x1F2\\xF53\\x11S?\\x07n=QRO\\x9C\\x1F2\\xF53\\x11S?Gn=\\xE5J\\x04\\xC7\\xD5lE\\x9F:\\x9A\\xAA\\xA9\\xA5\\xA7#\\xF1j\\x92\\x01{NY\\x9F\\xBA\\x9A\\xAA\\xA9\\xAD\\xCB\\x92]\\x93\\x08\\xD4\\xE5|E\\x9F:\\x9B\\xAA\\xA9\\xB5K6\\xABK\\x11\\xAC\\xCB9\\x90}\\xEAn\\xAA\\xA6\\xF6.\\xD9\\xBC.E\\xC0.\\xE7P\\xF6\\xA9\\xC3\\xA9\\x9AZ\\xBCd3\\xBB\\x14A\\xBB\\x9C\\x839d\\x1E'j\\xE6q6\\xB7K\\x11\\xB8K\\x07=\\xEE\\xA0\\xC7\\xD9\\xEC.E\\xF0.="
		"\\xF4\\xB8\\x87\\x1Eg\\xF3\\xBB\\x14\\x01\\xBC\\x0C\\xD0\\xE3\\x01z\\x9C\\xCD\\xF0R\\x04\\xF12B\\x8FG\\xE8q6\\xC7\\x95\\x88\\xE3jN\\xEA\\xBC\\x93$j\\xD6J\\xB29\\xAED\\x1CWsRg\\xDD$U\\xD3{\\xA7\\xD8\\x1CW\\xB2\\x86\\x9B\\xAC\\x98\\xDE;\\xAA\\xA6\\xF7N\\xB19\\xAED\\x1CWsRg]%US>)6\\xC7\\x95\\x88\\xE3jN\\xEA\\xAC\\xB3\\xA4j\\xCA'\\xC5\\xE6\\xB8\\x12q\\\\\\x91\\x06;\\xF38Q3\\x8F\\xB39\\xAED\\x1CW\\xA4\\xC9\\xCE<N\\xD4\\xCC\\xE3l\\x8E+\\x11\\xC7\\x95\\x87,\\xF0\\x90\\x05l\\x8E+\\x11\\xC7U\\x80,"
		"\\x08\\x90\\x05l\\x8E+\\x11\\xC7U\\x84,\\x88\\x90\\x05l\\x8Ek\\x11\\xC7\\xF5\n\\xB1\\x80\\xAA)\\x0B4\\x9B\\xE3Z\\xC4q]\"\\x16P5e\\x81fs\\\\\\x8B8\\xAE\\x15b\\x01US\\x8Fk\\xFE\\xECD6<\\xD1\\x88\\x05T\\xCD\\xC6'l\\x8Ek\\x11\\xC75!u\\xEAq\\xAA\\xA6\\x1E\\xD7l\\x8Ek\\x11\\xC7\\xF5\\x9C\\xD4\\xD9\\xDF\\x9CT\\xCD<\\xCE\\xE6\\xB8\\x16q\\\\\\xC3~\\\\\\xC3~\\\\\\xB39\\xAEE\\x1C\\xD7\\xB0\\x1F\\xD7\\xB0\\x1F\\xD7l\\x8Ek\\x11\\xC75\\xEC\\xC75\\xEC\\xC75\\x9B\\xE3Z\\xC4q\r\\xFBq\r"
		"\\xFBq\\xCD\\xE6\\xB8\\x11q\\xDC\\xCCI\\x9D\\xFD\\xCDI\\xD5\\xD4\\xE3\\x86\\xCDq#\\xE2\\xB8\\x81s\\x15\\x03\\xE7*\\x86\\xCDq#\\xE2\\xB8\\x81s\\x15\\xAA\\xA6\\x1E7l\\x8E\\x1B\\x11\\xC7\r\\x9C\\xABP5\\xF5\\xB8\\xE1\\xCF\\xC1e\\x83p8W1p\\xAEb\\xD8\\x1C7\"\\x8E\\x9B9\\xA9\\xB3>\\x93\\xAA\\xD9\\xBDcs\\xDC\\x888n\\xE6\\xA4\\xCE\\xFAL\\xAAf\\xF7\\x8E\\xCDq#\\xE2\\xB8!\\x1Dwv\\xEF\\x88\\x9A\\xDD;6\\xC7\\x8D\\x88\\xE3\\x86\\x0C\\xBF3"
		">\\x115\\xE3\\x13\\x9B\\xE3F\\xC4qC\\x06\\xE0\\x19\\x9F\\x88\\x9A\\xF1\\x89\\xCDq+\\xE2\\xB8%\\x1Dw\\xEAq\\xAA\\xA6\\x1E\\xB7l\\x8E[\\x11\\xC7-\\xE9\\xB8S\\x8FS5\\xF5\\xB8es\\xDC\\x8A8na\\x92I\\xD5\\xEC:\\xB19nE\\x1C\\xB70\\xCD\\xA4jv\\x9D\\xD8\\x1C\\xB7\"\\x8E[\\x98hZ\\x18iZ~\\xA6)\\x0B5q\\xAA\\x89cM6\\xC7\\xAD\\x88\\xE3\\x16&\\x9B\\x16F\\x9B\\x96\\xCDq+\\xE2\\xB8\\x85\\xE9\\xA6\\x85\\xF1\\xA6es\\xDC\\x8A8na\\xC2ia\\xC4i\\xD9\\x1C\\xB7\"\\x8E"
		"[\\x98rZ\\x18sZ6\\xC7\\x9D\\x88\\xE3\\x0E\\xE6\\x9C\\x0E\\xE6\\x9C\\x8E\\xCDq'\\xE2\\xB8\\x83\\xFD\\xB8\\x83\\xFD\\xB8cs\\xDC\\x898\\xEE`?\\xEE`?\\xEE\\xD8\\x1Cw\"\\x8E;\\xD8\\x8F;\\xD8\\x8F;6\\xC7\\x9D\\x88\\xE3\\x0E\\xF6\\xE3\\x0E\\xF6\\xE3\\x8E\\xCDq'\\xE2\\xB8\\x839\\xA7\\x839\\xA7\\xE3?\\x9F\""
		"{@\\x05\\xCEU\\x1C\\x9C\\xAB86\\xC7\\x9D\\x88\\xE3\\x0E\\xCEU\\x1C\\x9C\\xAB86\\xC7\\x9D\\x88\\xE3\\x0E\\xCEU\\x1C\\x9C\\xAB86\\xC7\\x9D\\x88\\xE3\\x0E\\xCEU\\x1C\\x9C\\xAB86\\xC7\\xBD\\x88\\xE3\\x1E\\xE6\\x9C\\x1E\\xE6\\x9C\\x9E\\xCDq/\\xE2\\xB8\\x879\\xA7\\x879\\xA7gs\\xDC\\x8B8\\xEEa\\xCEI\\xD5\\xF4\\xDEy6\\xC7\\xBD\\x88\\xE3\\x1E\\xE6\\x9CTM\\xF9\\xE4\\xD9\\x1C\\xF7\"\\x8E{\\x98sz\\x98sz6\\xC7\\xBD\\x88\\xE3\\x1E\\xE6\\x9C\\x1E\\xE6\\x9C\\x9E\\xCDq/\\xE2\\xB8\\x879\\xA7\\x879\\xA7\\xE7?k("
		"{\\xD8\\x10\\xE6\\x9C\\x1E\\xE6\\x9C\\x9E\\xCDq/\\xE2\\xB8\\x879\\xA7\\x879\\xA7gs\\xDC\\x8B8\\xEEa\\xCE\\xE9a\\xCE\\xE9\\xD9\\x1C\\x0F\"\\x8E\\x07\\x98s\\x06\\x98s\\x066\\xC7\\x83\\x88\\xE3\\x01\\xE6\\x9C\\x01\\xE6\\x9C\\x81\\xCD\\xF1 \\xE2x\\x809'US\\x8F\\x076\\xC7\\x83\\x88\\xE3\\x01\\xE6\\x9CT\\xCD\\x1E\\xABes<\\x888\\x1E`\\xCE\\x19`\\xCE\\x19\\xD8\\x1C\\x0F\"\\x8E\\x07\\x98s\\x06\\x98s\\x066\\xC7\\x83\\x88\\xE3\\x01\\xF6\\xE3\\x01\\xF6\\xE3\\x81\\xCD\\xF1 \\xE2x\\x80\\xFDx\\x80\\xFDx\\xE0?7."
		"{p\\x1C\\xF6\\xE3\\x01\\xF6\\xE3\\x81\\xCD\\xF1 \\xE2x\\x80\\xFDx\\x80\\xFDx`s<\\x8A8\\x1Ea\\xCE\\x19a\\xCE\\x19\\xD9\\x1C\\x8F\"\\x8EG8W\\x89p\\xAE\\x12\\xD9\\x1C\\x8F\"\\x8EG8W\\xA1j\\xEA\\xF1\\xC8\\xE6x\\x14q<\\xC2\\xB9\nUS\\x8FG6\\xC7\\xA3\\x88\\xE3\\x11\\xCEU\"\\x9C\\xABD6\\xC7\\xA3\\x88\\xE3\\x11\\xE6\\x9C\\x11\\xE6\\x9C\\x91\\xCD\\xF1(\\xE2x\\x849g\\x849gds<\\x8A8\\x1Ea\\xCE\\x19a\\xCE\\x19\\xD9\\x1C\\x8F\"\\x8EG\\x98sF\\x98sF\\xFE;"
		"@\\xB2\\x97\\x80`\\xCE\\x19a\\xCE\\x19\\xFF\\x9F\\xE3\\xCB\\xD9\\xFB\\x92\\xC7\\xEA\\xBE\\xFE\\xBD\\xEA\\xEE\\x9BC\\xBF\\xD8\\xD5\\xDB\\xA9\\x92\\xF1Jw\\xE7\\xD7:\\xA7\\x9F\\x87\\xF68\\xFD4\\x1A\\xF5k;\\x0C\\xED\\xFE\\xF5\\xD3C]\\xDD\\xD5\\xDD\\xE9\\xD3xF\\xDB\\xB6\\x1D^?,\\xCF\\xEB\\xFEU\\x0F\\x8F\\xC7E\\xDB5\\xE3\\x19N\\xEF\\xD6\\xAE\\x8Bc\\xDB\r]\\xD5\\x0C\\xE3\\xCE\\xE3\\xF7\\xFF\\xB6\\xA3\\xB0\\xBB=6\\xA7\\x87B\\xA2\\x89\\xCE\\xAB\\xD3\\x7F\\x87\\xA7\\xBA\\x1B\\x9A\\xCD;B?~Y\\x9F^`\\x1A\\x7F/"
		"l\\x9B\\xE1K\\xFB\\xF6.\\xE8\\xF9#y\\x1Bu\\xF9\\xF6r\\xF1\\xF5\\x7FPK\\x03\\x04\n\\x00\\x00\\x00\\x08\\x00\\xBC4\\xABR\\x90\\x99$\\xE6I\\x02\\x00\\x000\t\\x00\\x00\\x14\\x00\\x00\\x00xl/sharedStrings.xml}\\xD6[\\x93\\x9A0\\x18\\x06\\xE0\\xFB\\xFE\n\\x86{\\x96\\x1C\\x80\\x84\\x0E\\xB2\\xC3\\xC9\\xD9Y\\xAD\\x83\\x87\\xDA\\xB5wT\\xA92#`9\\xEC\\xB4\\xFF\\xBEA\\xA7;\\xD5|\\xE1\\xD2\\x84'\t\\xC9\\xFB\\x05\\xBD\\xE7\\xDF\\xE5Y{\\xCF\\x9B\\xB6\\xA8\\xAB\\x89\\x8E\\x9F\\x90\\xAE\\xE5\\xD5\\xBE"
		">\\x14\\xD5q\\xA2\\x7F\\xDDL\r\\xAEkm\\x97U\\x87\\xEC\\\\W\\xF9D\\xFF\\x93\\xB7\\xFA\\xB3\\xFF\\xC9k\\xDBN\\x13\\xB4j'\\xFA\\xA9\\xEB.\\x9FM\\xB3\\xDD\\x9F\\xF22k\\x9F\\xEAK^\\x89\\x9E\\x9FuSf\\x9D\\xF8\\xD9\\x1C\\xCD\\xF6\\xD2\\xE4\\xD9\\xA1=\\xE5yW\\x9EM\\x82\\x90c\\x96YQ\\xE9\\xDA\\xBE\\xEE\\xABNL\\x8B\\x99\\xA3k}U\\xFC\\xEA\\xF3\\xE8\\xD6\\xC4\\x89\\xEE{m\\xE1{\\x9D\\xBF\\xCE\\xCA\\xB6\\xAF\\x8E\\xDA:o\\x8A\\xEC\\xAC-\\xFA\\xF2G\\xDExf\\xE7{\\xE6\\xF0\\xC0\\xED\\xA1\\x97t\\xBC?"
		"i\\x9AZj\\xFC\\x9E\\xCC\\x9D\\xF05~\r\\x10B\\xD8\\x0E\\x1E\\xBB\\xA3E\\x88fa\\x10\\xAE\\xEC\\xC7\\x9E\\xD1\\x81\\xAC\\x85r g\\x14\\xD2\\x17\\x15\\\\\\xA2QH\\xB6*\\xB8\\xD8\\x8CB<SBi\\xC8;\\x88R%\\xFC\\xF6\\xD8\\xF3\\xEF\\xFC\\xD2\\xA6>\\xF4\\xFBN}\\x80\\xE3\\x0FD\\xF3\\xD4\\xA0\\xD86\\xDF\\x02\\xE9\\xA0\\xD6[\\x9B\\xDB\\xB1\n\\xAC\\x93\\x04\\x04\\xD1c+]\\x19\\x81\\xC8\\x013\\xE4\\x19\\x08\\xB2\\x88\\x8D\\x0C\\x84\\x08\\x88lF\\x01D\\xB9\\xC3,\\xAAD\\xDC\\xB2\\x01\\x84-\\x91 "
		"\\xACF\\xDC\\x1DCR\\xC0\\x06D\\x19A\\xD0;a\\xC695B\\x82\\x15\\x08Z\\x9E\\xD8\\x05\\xC1 t\r\\x00\\xDF\\x11l\\xA9\\x92\\xC3Er\\xC8\\x16\\x8E\\xDC\\x00\\xA52\\xBB\\x83\\x1B\\xB8\\xAC\\x06\\xA8,\\xAB+\\\\K\\x89\\xFC\\x80l\\x14\\xAEvJ\\xC8G\\xE1r\\xAA\\x84\\xEE(L\\xE7J\\x18\\x8E\\xC2\\x05\\\\\\x8F\\x03\\x94b~\\x07\\xBF\\xC0w\\xCE\\x00\\xA5\\x82\\xBA\\x83siA\\x1FPz\\xFB;8{\\x933Em\\x8CF\\x82\\xC8\\xA1 :\\x943\"\"\\x0F\\xA2k\\xB5B\\xE9\\x153\\x11\\xD5L\\x16\\xE7\\x18@q\\x84\\xB9+"
		"\\x17\\xB7\\x006BP\\x8D\\xC43\\xE6\\xCA_\\x93\\x1B\\xE0\\xD0\\xED\\x12\\xCF1U\\xCC@,\\x0B\\x04.s\\xA4\\x03\\xB8\\x02\\x8BA\\x17DD(\\xE7\\xF0\\x0C\\x8E\\x03\\xED\\xD4\\x12\\x13N\\xA5V\\xE9d\\xE3\\x843\\x04\\x8F\\xEB\\x12h!\\xE9\\xD6\\xB5\\xE4q\\x07 \\xD6\\x01]\\xA2\\xF1N\\\\\\xA2\n@\\xA1\\x95'\\x81\\xB8\\xD6\\x80\\xCBx\\x10\\xAE\\x0B\\xED\\xA6\\xF8\\x1A8\\x8E\\xBCeS\\x83\\xB2\\xFF\\xBE\\xBB\\xA6\\xF8\\xCB\\xE3\\xFF\\x05PK\\x03\\x04\n"
		"\\x00\\x00\\x00\\x00\\x00\\xBC4\\xABR\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\t\\x00\\x00\\x00xl/theme/PK\\x03\\x04\n\\x00\\x00\\x00\\x08\\x00\\xBC4\\xABRv\\x9B0\\xDF!\\x06\\x00\\x00\\x19\\x1F\\x00\\x00\\x13\\x00\\x00\\x00xl/theme/theme1.xml\\xEDYMo\\xDB6\\x18\\xBE\\xEFW\\x10\\xBA\\xB7\\xF2\\x97R'\\xA8S\\xC4\\x8E\\xDDnm\\xDA q;\\xF4HK\\xB4\\xC4\\x86\\x12\\x05\\x92N\\xE2\\xDB\\xD0\\x1E\\x07\\x0C\\x18\\xD6\r\\xBB\\x0C\\xD8m\\x87a[\\x81\\x16\\xD8\\xA5\\xFB5\\xD9"
		":l\\x1D\\xD0\\xBF\\xB0W\\xD6\\x87)\\x9Bj\\x9C&\\xDDP 98\"\\xF5<\\xEF\\x17\\xDF\\xF7%i_\\xBFq\\x1C2tH\\x84\\xA4<\\xEAX\\xF5\\xAB5\\x0B\\x91\\xC8\\xE5\\x1E\\x8D\\xFC\\x8Eu\\x7F8\\xB8\\xD2\\xB6\\x90T8\\xF20\\xE3\\x11\\xE9XS\"\\xAD\\x1B\\x9B\\x1F]\\xC7\\x1B* !A@\\x8F\\xE4\\x06\\xEEX\\x81R\\xF1\\x86mK\\x17\\xA6\\xB1\\xBC\\xCAc\\x12\\xC1\\xBB1\\x17!V0\\x14\\xBE\\xED\t|\\x04bCf7j\\xB55;\\xC44\\xB2P\\x84C\\x90zo<\\xA6.A\\xC3D\\xA4\\xB5\\x89r\\xE9}\\x06\\x1F\\x91\\x92\\xB3\\x19\\x97\\x89}"
		"w\\xA6S\\xE7\\xA4h\\xEF\\xA0>\\xFB/\\xA7\\xB2\\xC7\\x04:\\xC4\\xACc\\x81.\\x8F\\x1F\r\\xC9\\xB1\\xB2\\x10\\xC3R\\xC1\\x8B\\x8EU\\x9B\\xFDY6\\xA0\\xED9\\x8D\\xA9*\\xBAF\\x1D\\xCC\\xFErjN\\xF1\\x0E\\x1A)U\\xF8\\xA3\\x82[\\x1F\\xB4\\xD6\\xAFm\\xCF\\xB542-\\x06h\\xBF\\xDF\\xEF\\xF5\\xEBs\\xA9)\\x04\\xBB.\\xF8]_\\x86\\xB7\\x06\\xEDz\\xB7\\x90\\xAC\\xC3\\xD2g\\x83\\x86^\\xCD\\xA9\\xB5\\x16(\\xBA\\x96\\xE62e\\xBD\\xDB\\xED:\\xEBeJS\\xA3\\xB4\\x96)"
		"\\xED\\xDAZk\\xABQ\\xA6\\xB44\\x8Ac\\xF0\\xA5\\xBB\\xD5\\xEB\\xAD\\x95)\\x8EFY[\\xA6\\x0C\\xAE\\xAD\\xAF\\xB5\\x16(),`4:X&$\\xAB=_\\xB49h\\xCC\\xD9-3\\xA3\r\\x8Cv\\x91!\\x1A\\xCE\\xD6R0\\x93\\x11\\xA9\\xCA\\x8C\\x0C\\xF1#.\\x06\\x80H\\x97\\x1E+\\x1A!5\\x8D\\xC9\\x18\\xBB\\x80\\xEC\\xE1p$(\\x9Ei\\xC1\\x1B\\x04k\\xAF\\xB29W.\\xCF%\n\\x91t\\x05\\x8DU\\xC7\\xFA$\\xC6P>s\\xCC\\x9B\\x97?\\xBDy\\xF9\\x1C\\xBDy\\xF9\\xEC\\xE4\\xF1\\x8B\\x93\\xC7\\xBF\\x9E<yr\\xF2\\xF8\\x17\\x13\\xF3\\x16\\x8E|"
		"\\x9D\\xF9\\xFA\\x87/\\xFF\\xF9\\xEE3\\xF4\\xF7\\xF3\\xEF_?\\xFD\\xBA\\x82 u\\xC2\\x1F?\\x7F\\xFE\\xFBo_U \\x95\\x8E|\\xF5\\xCD\\xB3?_<{\\xF5\\xED\\x17\\x7F\\xFD\\xF8\\xD4\\x84\\xDF\\x12x\\xA4\\xE3\\x874$\\x12\\xDD%Gh\\x8F\\x87\\xE0\\x9FI\\x05\\x19\\x893R\\x86\\x01\\xA6%\n\\x0E\\x00jB\\xF6UPB\\xDE\\x9Dbf\\x04vI9\\x86\\x0F\\x04\\xB4\\x0B#\\xF2\\xE6\\xE4Q\\xC9\\xDE\\xFD@L\\x145!o\\x07a\t\\xB9\\xC39\\xEBra\\xF6\\xE9v\\xA2N\\xF7i\\x12\\xF9\\x15\\xFA\\xC5D\\x07\\xEEa|hT\\xDF"
		"[X\\xE5\\xFE$\\x86\\xDC\\xA6F\\xA1\\xBD\\x80\\x94L\\xDDe\\xB0\\xF0\\xD8'\\x11Q(y\\xC7\\x0F\\x081\\xF1\\x1ERZ\\x8A\\xEF\\x0Eu\\x05\\x97|\\xAC\\xD0C\\x8A\\xBA\\x98\\x9A\\x033\\xA4#ef\\xDD\\xA2!,\\xD0\\xD4h#\\xACz)B;\\x0FP\\x973\\xA3\\x82mrX\\x86B\\x85`f\\x14JX)\\x9A7\\xF1D\\xE1\\xD0l5\\x0E\\x99\\x0E\\xBD\\x83U`4t\\x7F*\\xDCR\\xE0\\xA5\\x82E\\xF7\t\\xE3\\xA8\\xEF\\x11)\\x8D\\xA4{bZ2\\xF96\\x866e\\xCE\\x80\\x1D6\r\\xCBP\\xA1\\xE8\\x81\\x11z\\x07s\\xAEC\\xB7\\xF9A/"
		"\\xC0al\\xB6\\x9BF\\x81\\x0E\\xFEX\\x1E@\\xC6b\\xB4\\xCB\\x95\\xD9\\x0E^\\xAE\\x99d\\x0C\\x0B\\x82\\xA3\\xEA\\x95\\x7F@\\x89:c\\xB1\\xDF\\xA7~`N\\x96\\xE4\\xCDD\\x18k\\x84\\xF0r\\x8DN\\xD9\\x18\\x93(\\xDF\\x04\\xCA\\xBD<\\xA4\\xD1[;;\\xA3\\xD0\\xDA/;\\xFBBg\\xDF\\x82\\xED\\xCEXQ\\x8B\\xFD\\xBC\\x12\\xF8\\x81v\\xF1m<\\x89v\tT\\xCAe\\x13\\xBFl\\xE2\\x97M\\xFCm\\x15\\xFE>Z\\xB7\\xD6\\xACm\\xFD\\xC8\\x9EJ\n\\xAB\\x0F\\xF0c\\xCA\\xD8\\xBE\\x9A2rG\\xA6\\x9D^"
		"\\x82\\x9B\\xDE\\x00f\\xD3\\xD1\\x8CW\\xDC\\x1A\\xE2\\x00\\x1Es\\xA5e\\xA4/\\xF0l\\x80\\x04W\\x9FR\\x15\\xEC\\x078\\x06]\\xF5T\\x8D/s\\xF9\\xBED1\\x97pe\\xB1\\xAA\\x15\\xA4Wc\n\\xFE\\xCF&\\x9D\\xE22\\x0Bx\\xACv\\xB8\\x97\\xCE7K\\xB7\\xDCBR:\\xF4eI]3\\x11\\xB2\\xBA\\xCA\\xE6\\xB5\\xF3\\xAB\\xAC\\xA7\\xD8\\x95u\\xD6\\x9D\n\\x9D\\xCEi:m=\\xC0P[\\x08'_k\\xD4\\xD7\\x1A\\xA9\\x05\\x90E\\x98\\x11/Y\\x8CLH\\xBEX\\xEF{\\xE5\\xEA5}"
		"\\xE9\\x02\\xEC\\x11\\xD3\\xBC\\xE6k\\xBD\\xF9\\xFE\\xE2\\xEB\\x9C\\xD1\\x96\\x8B\\x8B{\\xCD\\x10w\\xDBP{,Z\\x18\\xA2\\xA3\\x8E\\xB5\\xEE4\\x1C\\x0B\\xB98\\xEEXc8\\x86\\xC1c\\x18\\x83L\\x994(\\xCC\\xFC\\xA8c\\xB9*\\xF3u\\x85\\xDA]\\xF4~\\xBD\"\\xE9\\xEA5\\xA7\\xDA\\xF9\\xB2\\x9EXH\\xB5\\x8De\\x90\\x12g\\xEF\\x8A/z\"\\xCD\\x91\\x86\\xD3J\\x82rQ\\x9E\\x18\\xBB\\xD0\\xAA\\xB64\\xDB\\xF5\\xFF\\xDD\\x16{i\\xC1\\xC9xL\\\\U5\\xA5\\x8D\\xF3\\xB7|"
		"\\xA2\\x88\\xD8\\x0F\\xBC#4b\\x13\\xB1\\x87\\xC1\\x83V\\x9Az\\x1E\\x95\\xB0m4\\xF2\\x81\\x80\\xF4oeYY.\\xF3\\xBC\\x80\\x16\\xBFN\\xCA+\\x0B\\xB38\\xC0YA\\xB4\\xF5\\x94H\t\\xE9\\xA0\\xB0#\\x1D\\xEAF\\xDAU>\\xBC\\xB3O\\xCD\\x0B\\xF5\\xC9\\xB9\\xF4)\\xDF\\xF9]8\\x137\\xBD\\xD9\\xB3\\x0B\\x07\\x05\\x81Q\\x92\\xC2\\x1D\\x8B\\x0B\\x15ph]q@\\xDD\\x81\\x80\\xB3E\\xAA\\x11\\xECCP"
		":\\x89i\\x88%_\\xAB'6\\x93C\\xAD\\xDD\\xA5R\\xB2\\xEE\\xE8\\x07j\\x8F\\xFAHPh\\x91*\\x10\\x84\\xEC\\xAA\\xCC\\xE3\\xD3\\xE4\\xD5\\x1B\\xA5]7\\x17\\x95\\xB7\\xA6\\xB9\\xD52\\xCE\\x1EF\\xE4\\x90\\xB0aR\\xE8kI0,\\x14\\xE4\\xED'\\x8FJ\\x8A\\\\ZH\\xDBX\\x84#\\x7F\\xF0\\x01\\x1C\\x93Z\\xEF\\xBC\\x8F\\xCD\\xD5\\xB5\\xCE\\xB6\\xA5\\xB6\\xF4\\xDDC\\xDBT\\xD6\\xCFo\\xC9j\\xBB\\xBB\\xA6\\xB4Q\\xE1~\\xC3y\\xCBN\\xB6\\xBC\\x8D\\xC7p\\xF5A\\xC9\\x07\\xEC\\x00T\\xB8L;'\\x0F\\xF9\\x1Ed\\x06*\\x8E\\x12\\x08r\\xF5J"
		";+\\xD6br\\x04\\xB6\\xB7u?\\x13a\\xFF\\xED\\xB1\\xAB]\\x95\t\\x17~z\\xD5\\xE2\\xDF\\xAC\\x8A\\xFF\\xA9J\\xCF\\x13\\x7F\\xC7\\x10~\\xE7\\xD4\\xE8\\xDB\\x86\\x9A\\xB6\\xB5\\x8BR:\\\\\\xFEq\\x8E\\x8F\\x1E\\x81\\x05\\xDBp\t\\x9B\\xB0lJ\\xC60\\xCC\\x9EvE\\xEA\\xFE\\x88{\\xD3\\xFC\\x99\\xC9\\xB4\\x97d\\x81)6\\x08\\x16\\xED\\x911\\xA2\\xDEq\\xB1\\xE4\\x0BQ\\xCE~\\xF5\\x9A\\x1F\\x19\\xF62=I(\nns\\x15n\\xC6\\xD06\\xA6\\x82\\xDFX\\x85_p6\\xF3\\x8Bi\\xC1\\x9F\\xDD<\\x8D2\\x98\\xA6?"
		"ed\\x190o\\xB5\\xF3\\xD8\\xB1\\xE8\\xDCQ\\\\\\xC9\\x93\\x8A(\\x9A\\xF3|\\xF5(\\xAE\\xB4\\x82\\xEF\\x14Eu|j\\x14\\xF3\\xD8\\xD9\\xC6\\xFC$\\xC7J\\xE0^\\xFE\\x8B\\x1E\\xA4\\xBA\\xAD%\\xF7\\xE6\\xBFPK\\x03\\x04\n\\x00\\x00\\x00\\x08\\x00\\xBC4\\xABR\\xF4h\\xB3b\\xBB\\x02\\x00\\x00)\\x07\\x00\\x00\r\\x00\\x00\\x00xl/styles.xml\\xA5\\x95]o\\x9B0\\x14\\x86\\xEF\\xF7+,\\xDFS\\x03\tY\\x12\\x01U\\x93\\x14\\xA9R7Mj&\\xED\\xD6\\x80!V\\xFD\\x81l\\xA7K6\\xED\\xBF\\xCF\\x06\\x12\\x88\\xBA~\\xA8\\xE3\""
		"\\xF8\\x1C\\x9F\\xF3\\x9C\\xD7\\xC7\\xC6\\x89\\xAF\\x0F\\x9C\\x81'\\xA24\\x95\"\\x81\\xC1\\x95\\x0F\\x01\\x11\\x85,\\xA9\\xA8\\x13\\xF8}\\x9Bys\\x08\\xB4\\xC1\\xA2\\xC4L\n\\x92\\xC0#\\xD1\\xF0:\\xFD\\x14ksd\\xE4aG\\x88\\x01\\x96 t\\x02w\\xC64K\\x84t\\xB1#\\x1C\\xEB+\\xD9\\x10ag*\\xA986\\xD6T5\\xD2\\x8D\"\\xB8\\xD4.\\x893\\x14\\xFA\\xFE\\x0CqL\\x05\\xEC\\x08K^\\xBC\\x07\\xC2\\xB1z\\xDC7^!y\\x83\r\\xCD)\\xA3\\xE6\\xD8\\xB2 \\xE0\\xC5\\xF2\\xAE\\x16R\\xE1\\x9CY\\xA5\\x87`\\x8A\\x0Bp\\x08f*<Uh]"
		"\\xCF\\x8ApZ(\\xA9ee\\xAE,\\x14\\xC9\\xAA\\xA2\\x05y\\xAEu\\x81\\x16\\x08\\x17\\x03\\xC9b?F\n\"\\xE4\\x87\\xDD\\xC2\\xD3\\xB8\\x92\\xC2hP\\xC8\\xBD0\t\\x9CX\\xBAS\\xB8|\\x14\\xF2\\xA7\\xC8\\xDC\\x94\\xDD\\x92>*\\x8D\\x05\\xE6\\x04<a\\x96\\xC05f4W\\x14\\xA24F\\xDD\\\\\\xF7\\x9B[G!\\x99T@\\xD5y\\x02\\xB3\\xF6y\\x16\\xA5\\x7Fu\\x94\\xC0wS\\x03\\xF5FQ\\xCC\\xC0\\x8A\\xE1\\xE2q\\x94\\xD3\\xBE\\xB4\\xCD\\xA5\\x8C\\x8D\\x94v\\x8E4\\xB6\\x9B`\\x88\\x12\\x995@?\\xDE\\x1E\\x1B\\xDB~"
		"a\\x8FK\\x87i\\xE3\\xDE\\x88\\xAE\\x15>\\x06a\\xF4\\xFE\\x04-\\x19-\\x9D\\x8Az=,\\xD8\\xB7O\\xB7\\xE0|\\xEC\\xCE\\xB2a\\x02\\x8D\\x88\\xE7Z\\xED\\xCB\\xAE1\\x97\\xAA\\xB4\\x9F\\xC2i\\x95\\xAE\\xF5\\x9D+\\x8D\\x19\\xA9\\x8CMW\\xB4\\xDE\\xB9\\xB7\\x91\\x8D\\xAB\"\\x8D\\xB1\\x1B\\x9D\\xC6%\\xC5\\xB5\\x14\\x98\\xB9\\x02\\xA7\\x8C~`\\xB1\\x05a\\xEC\\xC1}/?\\xAA\\x0B\\xF6\\xA1\\x02b\\xCF3n\\xEEJ\\xAB\\x1D\\x02\\xD7\\xE9\\xD3\\xD0\n"
		"\\xEA\\x87\\x1D\\xA63\\x1C\\x7FL\\xEB\\xD8#\\xEC\\xE4CXp\\xA8\\xCE\\xFC\\x97\\xB2\\x83!;|!\\x1B\\xE0\\xA6aGwn\\xDB\\xF0\\xCE\\xB29\\xCEz\\x85\\x1C\\xBE\\xAD\\xEB\\x92|\\xEA\\xC2\\xB9\\x01m;.Z{\\xF6\\x02w\\xBE\\x13\\xF8\\xD5\\xDD l\\x04\\xCC\\xF7\\x94\\x19*\\xFE\\xD1V\\xCB,\\x0FCG\\xDBY\\xE3\\xAE\\x94\\xCB*\\x96Q\\x92\n\\xEF\\x99\\xD9\\x9E'\\x138\\x8C\\xBF\\x90\\x92\\xEEyx\\x8E\\xFAF\\x9F\\xA4\\xE9\\xA3\\x86\\xF1\\xBD;O\\xC1\\xCC\\xD5 \\x07s\\xAFM\\xFB\\x06"
		"{E\\x13\\xF8\\xFBv\\xF5y\\xB1\\xB9\\xCDBo\\xEE\\xAF\\xE6\\xDEtB\"o\\x11\\xAD6^4]\\xAF6\\x9Bl\\xE1\\x87\\xFE\\xFA\\xCF\\xE8n\\xFB\\x8F\\x9B\\xAD\\xBF\\x8E,d\\xA9\\x99\\x8DR\\xFDb{\\xF1\\x0F\\x83/\\x81#\\xA3\\x93\\xDF\\xF6\\xCF\\xCA\\x1Ek_\\x843\\xFF&\n|/\\x9B\\xF8\\x817\\x9D\\xE1\\xB97\\x9FM\"/\\x8B\\x82p3\\x9B\\xAEn\\xA3,\\x1Ai\\x8F>x\\x97\\xFA(\\x08\\x06\\xF1\\xD1\\xD2PN\\x18\\x15\\xE4R\\xFEv\\xEC\\xB5\\x9Bd\\xCDW\\x16\\x81N;\\x81\\x86?\\xB9\\xF4/PK\\x03\\x04\n"
		"\\x00\\x00\\x00\\x00\\x00\\xBC4\\xABR\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\t\\x00\\x00\\x00docProps/PK\\x03\\x04\n\\x00\\x00\\x00\\x08\\x00\\xBC4\\xABRq\\xB3\\xE9\\xD9\\x9A\\x01\\x00\\x00\\x99\\x03\\x00\\x00\\x10\\x00\\x00\\x00docProps/app.xml\\x9DS\\xCBn\\xDB0\\x10\\xBC\\xF7+\\x04\\xDEc*\\xA9\\x11\\x14\\x06\\xC5\\xA0pZ\\xF8\\xD0\\x87\\x019\\xE9\\x99\\xA1V\\x16\\x11\\x8A$\\xB8+\\xC1\\xEE\\xD7\\x97\\x92aEN\\x8A\\xA0\\xE8mvw0\\x9C}"
		"P\\xDC\\x1DZ\\x9B\\xF5\\x10\\xD1xW\\xB0\\xEBE\\xCE2p\\xDAW\\xC6\\xED\\x0B\\xF6\\xB0\\xFBz\\xF5\\x89eH\\xCAU\\xCAz\\x07\\x05;\\x02\\xB2;\\xF9Al\\xA3\\x0F\\x10\\xC9\\x00fI\\xC1a\\xC1\\x1A\\xA2\\xB0\\xE2\\x1Cu\\x03\\xAD\\xC2E*\\xBBT\\xA9}l\\x15\\xA50\\xEE\\xB9\\xAFk\\xA3\\xE1\\xDE\\xEB\\xAE\\x05G\\xFC&\\xCFo9\\x1C\\x08\\\\\\x05\\xD5U\\x98\\x04\\xD9Iq\\xD5\\xD3\\xFF\\x8AV^\\x0F\\xFE\\xF0qw\\x0CIO\\x8A\\xCF!X\\xA3\\x15\\xA5&\\xE5w\\xA3\\xA3G_S\\xF6\\xE5\\xA0\\xC1\n>/"
		"\\x8A$T\\x82\\xEE\\xA2\\xA1\\xA3\\xCC\\x05\\x9F\\x87\\xA2\\xD4\\xCA\\xC2:\t\\xCBZY\\x04\\xC1_\\x12b\\x03j\\x98\\xD9V\\x99\\x88R\\xF4\\xB4\\xEAA\\x93\\x8F\\x19\\x9A\\xDFij7,{R\\x08\\x83\\x9D\\x82\\xF5*\\x1A\\xE5\\x88\\x9Dh\\xA7`\\xC46 E\\xF9\\xCB\\xC7gl\\x00\\x08\\x05\\x9F\\x92#\\x9Cs\\xE7\\xD8,\\xE5r$$pI\\xE4\\x93\\x91\\x84/-\\xEE\\x0CY\\xC0\\x9F\\xF5VE\\xFA\\x8B\\xE3\\xE5\\xDC\\xF1\\xE8\\x81\\xCD<\\x96\\xAA\\xC5\\xCE\\xED\\xB3\\x12\\xD2C6\\xFB\\xD1\\xB5O\\xE9\\x84\\xE6~"
		"\\xDFP\\xD3B\\xAAN\\xD3\\xBB\\xDC\\xCD\\xF6_\\x14\\x13\\xEB\\x1D\\xB1\\x8B\\x96_5\\xB9\\xF6mP.m\\x92O\\xE8\\x9Bq\\xCF\\xF8\\x10v\\xFE^\\x11\\x9C\\xF7z\\x99\\x14e\\xA3\"T\\xE9\\x14\\xA6\\xBDO\t\\xB1I\\x03\\x8Av\\xE0\\xAF\\x1B\\xE5\\xF6P\\x9D9o\\x0B\\xC3\\x15>\\x9E~\\x9A\\xBC\\xBE]\\xE4\\x1F\\xF3|<\\xBEsN\\xF0\\x97O%\\xFF\\x00PK\\x03\\x04\n\\x00\\x00\\x00\\x08\\x00\\xBC4\\xABR.w\\x18\\xED,\\x01\\x00\\x00^\\x02\\x00\\x00\\x11\\x00\\x00\\x00docProps/core.xml\\x9D\\x92]k\\xC20\\x14\\x86\\xEF\\xF7+"
		"J\\xEE\\xDB4\\x8A:B[a\\x1B^M\\x18L\\xD9\\xD8]H\\x8E5\\xD8|\\x90d\\xAB\\xFE\\xFB\\xA5U\\xAB2\\xAFv\\x99\\xBC\\xCFyr\\xCE!\\xC5|\\xAF\\x9A\\xE4\\x07\\x9C\\x97F\\x97\\x88d9J@s#\\xA4\\xAEK\\xB4^-\\xD2G\\x94\\xF8\\xC0\\xB4`\\x8D\\xD1P\\xA2\\x03x4\\xAF\\x1E\nn)7\\x0E\\xDE\\x9C\\xB1\\xE0\\x82\\x04\\x9FD\\x91\\xF6\\x94\\xDB\\x12mC\\xB0\\x14c\\xCF\\xB7\\xA0\\x98\\xCF\"\\xA1c\\xB81N\\xB1\\x10\\x8F\\xAE\\xC6\\x96\\xF1\\x1D\\xAB\\x01\\x8F\\xF2|\\x8A\\x15\\x04&X`\\xB8\\x13\\xA6v0\\xA2\\x93R\\xF0Ai\\xBF]"
		"\\xD3\\x0B\\x04\\xC7\\xD0\\x80\\x02\\x1D<&\\x19\\xC1\\x176\\x80S\\xFEnA\\x9F\\\\\\x91J\\x86\\x83\\x85\\xBB\\xE89\\x1C\\xE8\\xBD\\x97\\x03\\xD8\\xB6m\\xD6\\x8E{4\\xF6O\\xF0\\xE7\\xF2\\xF5\\xBD\\x1F5\\x95\\xBA[\\x15\\x07T\\x15\\x82S\\xEE\\x80\\x05\\xE3\\xAA\\xB5\\xDEi\\xD3\\xEA\\x02_\\xDDu\\xFBk\\x98\\x0F\\xCB\\xB8\\xE9\\x8D\\x04\\xF1t\\xB8`\\x7F\\xA3\\xE24\\xD6\\xB1\\x1CD\\x12\\xDB\\xA1\\xC7\\xE6\\xCF\\xC9\\xC7\\xF8\\xF9e\\xB5@\\xD5(\\x1F\\x914\\x9F\\xA4\\x84\\xAC\\xF2)"
		"\\x1D\\xCF\\xE8d\\xF6\\xD5\\xBD|S\\x7F\\x11\\xAA\\xD3#\\xFF6\\x9E\\x05U\\xDF\\xF7\\xED\\x97\\xA8~\\x01PK\\x03\\x04\n\\x00\\x00\\x00\\x08\\x00\\xBC4\\xABR\\xBE7zo\\x86\\x01\\x00\\x00c\\x03\\x00\\x00\\x0F\\x00\\x00\\x00xl/workbook.xml\\x8D\\x92\\xC9N\\xC30\\x10\\x86\\xEF<\\x85\\xE5;M\\xD2\\x96\\x02US$\\x04\\x88^P%\\x96\\xFB\\xD4\\x9E\\xB4V\\xBD\\xC9v\n}{&\ta?\\xE4\\x12/\\xE3\\xF9\\xE6\\x9F\\x7F\\xB2\\xB8z3\\x9A\\x1D0D\\xE5l\\xC9\\x8BQ\\xCE\\x19Z\\xE1\\xA4\\xB2\\xDB\\x92??\\xDD\\x9D^p\\x16\\x13X\t"
		"\\xDAY,\\xF9\\x11#\\xBFZ\\x9E,^]\\xD8o\\x9C\\xDB3\\xCA\\xB7\\xB1\\xE4\\xBB\\x94\\xFC<\\xCB\\xA2\\xD8\\xA1\\x818r\\x1E-E*\\x17\\x0C$:\\x86m\\x16}@\\x90q\\x87\\x98\\x8C\\xCE\\xC6y>\\xCB\\x0C(\\xCB;\\xC2<\\x0Ca\\xB8\\xAAR\\x02o\\x9C\\xA8\r\\xDA\\xD4A\\x02jH\\xA4>\\xEE\\x94\\x8F=\\xCD\\x88!8\\x03a_\\xFBS\\xE1\\x8C'\\xC4Fi\\x95\\x8E-\\x943#\\xE6\\xAB\\xADu\\x016\\x9A\\xBA~+\\xCEz2m\\xFF\\xA0\\x8D\\x12\\xC1EW\\xA5\\x11\\xA1>D\\xFE\\xE9\\xB7\\xC8\\xB3\\xA2\\xE8Z^"
		".*\\xA5\\xF1\\xA5s\\x9D\\x81\\xF7\\x0F`\\x9A*\\x9A3\r1\\xDDJ\\x95P\\x96\\x9Cjj\\xF7\\x8A?.B\\xED\\xAFk\\xA5\\xE9p9\\xC9'<[~Nb\\x1D\\x98\\xC4\nj\\x9D\\x9EHUO\\xA7\\x99\\xCE\\xA6yQpF%\\x13\\x86uP\\x07\\x10G\\xBAnr[u\\xF1ce\\xEDw%\\x9B\\x18\\xB3\\xAD\\xA2G0\\xB1\\xB6[\\xF6\\x88A\\x81f\\x0F\\xB5\\xD9\\x10\\xB6\\xFD#\\x12\\x85\\x0F**\\xF2\\x87T\\xCD\\x15\\xA5\\x85\\x95\\x9C~R\\xBFh\\xE3\\xDF\\xB4up\\xB2\\x16i\\x00\\xEE\\xEC\\x1F\\xDC\\xA4\\xC7\\xDD\\xAF\\x87\\xEB\\x9A\\xFD\\x03\\x9A~\\x03\r"
		"\\x97t\\xDE\\x90\\xB2\\xDE8\\x01Z\\x90\\xF1\\xCD\\xD2\\x1Aw^\\xE4\\xE3\\xEEE?\\x96\\xE5;PK\\x01\\x02\\x14\\x00\n\\x00\\x00\\x00\\x08\\x00\\xBC4\\xABR_)\\xF6\\xB7f\\x01\\x00\\x00\\x88\\x06\\x00\\x00\\x13\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00[Content_Types].xmlPK\\x01\\x02\\x14\\x00\n"
		"\\x00\\x00\\x00\\x00\\x00\\xBC4\\xABR\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x06\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x10\\x00\\x00\\x00\\x97\\x01\\x00\\x00_rels/PK\\x01\\x02\\x14\\x00\n\\x00\\x00\\x00\\x08\\x00\\xBC4\\xABR\\xF2\\x9FI\\xDA\\xE9\\x00\\x00\\x00K\\x02\\x00\\x00\\x0B\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\xBB\\x01\\x00\\x00_rels/.relsPK\\x01\\x02\\x14\\x00\n"
		"\\x00\\x00\\x00\\x00\\x00\\xBC4\\xABR\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x03\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x10\\x00\\x00\\x00\\xCD\\x02\\x00\\x00xl/PK\\x01\\x02\\x14\\x00\n\\x00\\x00\\x00\\x00\\x00\\xBC4\\xABR\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\t\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x10\\x00\\x00\\x00\\xEE\\x02\\x00\\x00xl/_rels/PK\\x01\\x02\\x14\\x00\n"
		"\\x00\\x00\\x00\\x08\\x00\\xBC4\\xABR\\x8D3S\\xD3\\xFE\\x00\\x00\\x00`\\x04\\x00\\x00\\x1A\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x15\\x03\\x00\\x00xl/_rels/workbook.xml.relsPK\\x01\\x02\\x14\\x00\n\\x00\\x00\\x00\\x00\\x00\\xBC4\\xABR\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x0E\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x10\\x00\\x00\\x00K\\x04\\x00\\x00xl/worksheets/PK\\x01\\x02\\x14\\x00\n"
		"\\x00\\x00\\x00\\x08\\x00\\xBC4\\xABR_\\x0F\\xA3\\xD7\\xFB\\x06\\x00\\x00\\xE89\\x00\\x00\\x18\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00w\\x04\\x00\\x00xl/worksheets/sheet1.xmlPK\\x01\\x02\\x14\\x00\n\\x00\\x00\\x00\\x08\\x00\\xBC4\\xABR\\xC2\\xA1\\xBD\\xBE\\xF1\\x06\\x00\\x00x;\\x00\\x00\\x18\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\xA8\\x0B\\x00\\x00xl/worksheets/sheet2.xmlPK\\x01\\x02\\x14\\x00\n"
		"\\x00\\x00\\x00\\x08\\x00\\xBC4\\xABR\\xCF\\x9E#\\xE0\\xDE\\x06\\x00\\x00v;\\x00\\x00\\x18\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\xCF\\x12\\x00\\x00xl/worksheets/sheet3.xmlPK\\x01\\x02\\x14\\x00\n\\x00\\x00\\x00\\x08\\x00\\xBC4\\xABR[\\x95\\xD4~O\\x07\\x00\\x00\\xA0<\\x00\\x00\\x18\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\xE3\\x19\\x00\\x00xl/worksheets/sheet4.xmlPK\\x01\\x02\\x14\\x00\n"
		"\\x00\\x00\\x00\\x08\\x00\\xBC4\\xABR\\x90\\x99$\\xE6I\\x02\\x00\\x000\t\\x00\\x00\\x14\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00h!\\x00\\x00xl/sharedStrings.xmlPK\\x01\\x02\\x14\\x00\n\\x00\\x00\\x00\\x00\\x00\\xBC4\\xABR\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\t\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x10\\x00\\x00\\x00\\xE3#\\x00\\x00xl/theme/PK\\x01\\x02\\x14\\x00\n\\x00\\x00\\x00\\x08\\x00\\xBC4\\xABRv\\x9B0\\xDF"
		"!\\x06\\x00\\x00\\x19\\x1F\\x00\\x00\\x13\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\n$\\x00\\x00xl/theme/theme1.xmlPK\\x01\\x02\\x14\\x00\n\\x00\\x00\\x00\\x08\\x00\\xBC4\\xABR\\xF4h\\xB3b\\xBB\\x02\\x00\\x00)\\x07\\x00\\x00\r\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\\\*\\x00\\x00xl/styles.xmlPK\\x01\\x02\\x14\\x00\n\\x00\\x00\\x00\\x00\\x00\\xBC4\\xABR\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\t"
		"\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x10\\x00\\x00\\x00B-\\x00\\x00docProps/PK\\x01\\x02\\x14\\x00\n\\x00\\x00\\x00\\x08\\x00\\xBC4\\xABRq\\xB3\\xE9\\xD9\\x9A\\x01\\x00\\x00\\x99\\x03\\x00\\x00\\x10\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00i-\\x00\\x00docProps/app.xmlPK\\x01\\x02\\x14\\x00\n\\x00\\x00\\x00\\x08\\x00\\xBC4\\xABR.w\\x18\\xED,\\x01\\x00\\x00^\\x02\\x00\\x00\\x11\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x001/\\x00\\x00docProps/"
		"core.xmlPK\\x01\\x02\\x14\\x00\n\\x00\\x00\\x00\\x08\\x00\\xBC4\\xABR\\xBE7zo\\x86\\x01\\x00\\x00c\\x03\\x00\\x00\\x0F\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x8C0\\x00\\x00xl/workbook.xmlPK\\x05\\x06\\x00\\x00\\x00\\x00\\x13\\x00\\x13\\x00\\x98\\x04\\x00\\x00?2\\x00\\x00\\x00\\x00\r\n------WebKitFormBoundaryScb7jG1TCYygGf7u--\r\n", 
		"LAST");

	lr_end_transaction("FP21_BulkConversion_02_SelectFile&Submit",2);
	lr_think_time(1);

	return 0;
}
# 5 "e:\\performance\\css\\fy21\\wccbusiness\\scripts\\itg\\v1\\falcon_s06_samsungconversion\\\\combined_Falcon_S06_SamsungConversion.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
	return 0;
}
# 6 "e:\\performance\\css\\fy21\\wccbusiness\\scripts\\itg\\v1\\falcon_s06_samsungconversion\\\\combined_Falcon_S06_SamsungConversion.c" 2

