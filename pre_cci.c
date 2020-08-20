# 1 "c:\\users\\elder\\desktop\\testrun\\\\combined_testrun.c"
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
VTCERR   vtc_update_all_message_ifequals(PVCI pvci, char * columnNames, char * message, char * ifmessage, char * delimiter, unsigned short *outRc);

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
VTCERR   lrvtc_update_all_message_ifequals(char * columnNames, char * message, char * ifmessage, char * delimiter);



 
 
 
 
 

 
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







 
 



















# 1 "c:\\users\\elder\\desktop\\testrun\\\\combined_testrun.c" 2

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

 
 
 

                               


 
 
 





















# 2 "c:\\users\\elder\\desktop\\testrun\\\\combined_testrun.c" 2

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

# 1 "WebSocketBuffer.h" 1



 

char WebSocketReceive0[] = "\\x4D\\x53\\x47\\x23\\x31\\x23\\x33\\x23\\x32\\x23\\x30\\x3A\\x39\\x3A\\x38\\x33"
                        "\\x3A\\x32\\x30\\x33\\x3A\\x38\\x30\\x3A\\x39\\x36\\x3A\\x31\\x30\\x32\\x38\\x32"
                        "\\x36\\x32\\x34\\x33\\x2C\\x31\\x33\\x3D\\x31\\x33\\x3A\\x76\\x36\\x2E\\x33\\x33"
                        "\\x62\\x30\\x31\\x20\\x46\\x75\\x6C\\x6C\\x3B\x00";
long WebSocketReceiveLen0   = sizeof(WebSocketReceive0) - 1;	 

 

char WebSocketReceive1[] = "\\x4D\\x53\\x47\\x23\\x32\\x23\\x34\\x23\\x35\\x23\\x38\\x36\\x34\\x3A\\x30\\x3A"
                        "\\x34\\x3A\\x31\\x30\\x32\\x38\\x32\\x36\\x32\\x34\\x33\\x3A\\x30\\x2C\\x31\\x33"
                        "\\x3D\\x31\\x33\\x3A\\x76\\x36\\x2E\\x33\\x33\\x62\\x30\\x31\\x20\\x46\\x75\\x6C"
                        "\\x6C\\x2C\\x31\\x3D\\x32\\x30\\x35\\x3A\\x33\\x47\\x50\\x7C\\x37\\x5A\\x7C\\x41"
                        "\\x41\\x43\\x7C\\x41\\x43\\x45\\x7C\\x41\\x49\\x46\\x7C\\x41\\x52\\x4A\\x7C\\x41"
                        "\\x53\\x46\\x7C\\x41\\x56\\x49\\x7C\\x42\\x49\\x4E\\x7C\\x42\\x5A\\x32\\x7C\\x45"
                        "\\x58\\x45\\x7C\\x47\\x5A\\x7C\\x47\\x5A\\x49\\x50\\x7C\\x49\\x4D\\x47\\x7C\\x49"
                        "\\x53\\x4F\\x7C\\x4C\\x5A\\x48\\x7C\\x4D\\x34\\x41\\x7C\\x4D\\x34\\x56\\x7C\\x4D"
                        "\\x4B\\x56\\x7C\\x4D\\x4F\\x56\\x7C\\x4D\\x50\\x33\\x7C\\x4D\\x50\\x34\\x7C\\x4D"
                        "\\x50\\x41\\x7C\\x4D\\x50\\x45\\x7C\\x4D\\x50\\x45\\x47\\x7C\\x4D\\x50\\x47\\x7C"
                        "\\x4D\\x53\\x49\\x7C\\x4D\\x53\\x55\\x7C\\x4F\\x47\\x47\\x7C\\x4F\\x47\\x56\\x7C"
                        "\\x50\\x44\\x46\\x7C\\x50\\x4C\\x4A\\x7C\\x50\\x50\\x53\\x7C\\x50\\x50\\x54\\x7C"
                        "\\x51\\x54\\x7C\\x52\\x30\\x2A\\x7C\\x52\\x31\\x2A\\x7C\\x52\\x41\\x7C\\x52\\x41"
                        "\\x52\\x7C\\x52\\x4D\\x7C\\x52\\x4D\\x56\\x42\\x7C\\x53\\x45\\x41\\x7C\\x53\\x49"
                        "\\x54\\x7C\\x53\\x49\\x54\\x58\\x7C\\x54\\x41\\x52\\x7C\\x54\\x49\\x46\\x7C\\x54"
                        "\\x49\\x46\\x46\\x7C\\x57\\x41\\x56\\x7C\\x57\\x4D\\x41\\x7C\\x57\\x4D\\x56\\x7C"
                        "\\x5A\\x7C\\x5A\\x49\\x50\\x2C\\x33\\x3D\\x39\\x30\\x3A\\x46\\x4C\\x56\\x7C\\x4D"
                        "\\x50\\x33\\x7C\\x4D\\x50\\x34\\x7C\\x4D\\x34\\x56\\x7C\\x46\\x34\\x56\\x7C\\x4D"
                        "\\x34\\x41\\x7C\\x4D\\x50\\x47\\x7C\\x4D\\x50\\x45\\x47\\x7C\\x41\\x56\\x49\\x7C"
                        "\\x57\\x4D\\x56\\x7C\\x57\\x4D\\x41\\x7C\\x57\\x41\\x56\\x7C\\x41\\x53\\x46\\x7C"
                        "\\x52\\x4D\\x7C\\x4F\\x47\\x47\\x7C\\x4F\\x47\\x56\\x7C\\x4D\\x4F\\x56\\x7C\\x33"
                        "\\x47\\x50\\x7C\\x51\\x54\\x7C\\x57\\x45\\x42\\x4D\\x7C\\x54\\x53\\x7C\\x4D\\x4B"
                        "\\x56\\x7C\\x41\\x41\\x43\\x2C\\x32\\x3D\\x34\\x36\\x3A\\x43\\x53\\x53\\x7C\\x4A"
                        "\\x53\\x7C\\x4A\\x53\\x4F\\x4E\\x7C\\x41\\x50\\x4E\\x47\\x7C\\x47\\x49\\x46\\x7C"
                        "\\x49\\x43\\x4F\\x7C\\x4A\\x50\\x45\\x47\\x7C\\x4A\\x50\\x47\\x7C\\x50\\x4E\\x47"
                        "\\x7C\\x53\\x56\\x47\\x7C\\x57\\x45\\x42\\x50\\x2C\\x34\\x3D\\x33\\x34\\x3A\\x4A"
                        "\\x53\\x4F\\x4E\\x7C\\x47\\x5A\\x7C\\x5A\\x7C\\x47\\x5A\\x49\\x50\\x7C\\x5A\\x49"
                        "\\x50\\x7C\\x42\\x5A\\x32\\x7C\\x4C\\x5A\\x48\\x7C\\x42\\x49\\x4E\\x7C\\x45\\x58"
                        "\\x45\\x2C\\x39\\x3D\\x31\\x33\\x31\\x3A\\x2A\\x2E\\x75\\x70\\x64\\x61\\x74\\x65"
                        "\\x2E\\x6D\\x69\\x63\\x72\\x6F\\x73\\x6F\\x66\\x74\\x2E\\x63\\x6F\\x6D\\x7C\\x64"
                        "\\x6F\\x77\\x6E\\x6C\\x6F\\x61\\x64\\x2E\\x77\\x69\\x6E\\x64\\x6F\\x77\\x73\\x75"
                        "\\x70\\x64\\x61\\x74\\x65\\x2E\\x63\\x6F\\x6D\\x7C\\x2A\\x2E\\x64\\x6F\\x77\\x6E"
                        "\\x6C\\x6F\\x61\\x64\\x2E\\x77\\x69\\x6E\\x64\\x6F\\x77\\x73\\x75\\x70\\x64\\x61"
                        "\\x74\\x65\\x2E\\x63\\x6F\\x6D\\x7C\\x73\\x69\\x74\\x65\\x73\\x65\\x61\\x6C\\x2E"
                        "\\x74\\x68\\x61\\x77\\x74\\x65\\x2E\\x63\\x6F\\x6D\\x7C\\x65\\x63\\x6F\\x6D\\x2E"
                        "\\x63\\x69\\x6D\\x65\\x74\\x7A\\x2E\\x63\\x6F\\x6D\\x7C\\x2A\\x2E\\x76\\x6F\\x69"
                        "\\x63\\x65\\x32\\x70\\x61\\x67\\x65\\x2E\\x63\\x6F\\x6D\\x2C\\x31\\x31\\x3D\\x37"
                        "\\x38\\x3A\\x2A\\x2E\\x67\\x73\\x74\\x61\\x74\\x69\\x63\\x2E\\x63\\x6F\\x6D\\x7C"
                        "\\x6D\\x65\\x64\\x69\\x61\\x2E\\x74\\x65\\x6E\\x6F\\x72\\x2E\\x63\\x6F\\x6D\\x7C"
                        "\\x6D\\x65\\x64\\x69\\x61\\x2A\\x2E\\x67\\x69\\x70\\x68\\x79\\x2E\\x63\\x6F\\x6D"
                        "\\x7C\\x6D\\x65\\x64\\x69\\x61\\x2E\\x74\\x65\\x6E\\x6F\\x72\\x2E\\x63\\x6F\\x7C"
                        "\\x6D\\x65\\x64\\x69\\x61\\x2A\\x2E\\x67\\x69\\x70\\x68\\x79\\x2E\\x63\\x6F\\x6D"
                        "\\x2C\\x32\\x30\\x3D\\x35\\x34\\x3A\\x54\\x58\\x54\\x7C\\x48\\x54\\x4D\\x7C\\x48"
                        "\\x54\\x4D\\x4C\\x7C\\x43\\x53\\x53\\x7C\\x4A\\x53\\x7C\\x41\\x50\\x4E\\x47\\x7C"
                        "\\x47\\x49\\x46\\x7C\\x49\\x43\\x4F\\x7C\\x4A\\x50\\x45\\x47\\x7C\\x4A\\x50\\x47"
                        "\\x7C\\x50\\x4E\\x47\\x7C\\x53\\x56\\x47\\x7C\\x57\\x45\\x42\\x50\\x2C\\x32\\x31"
                        "\\x3D\\x31\\x36\\x3A\\x2F\\x2A\\x2D\\x69\\x6E\\x74\\x65\\x72\\x6E\\x61\\x6C\\x2D"
                        "\\x2A\\x2F\\x2A\\x2A\\x2C\\x31\\x39\\x3D\\x32\\x39\\x36\\x39\\x3A\\x68\\x74\\x74"
                        "\\x70\\x3A\\x2F\\x2F\\x74\\x6F\\x6F\\x6C\\x62\\x61\\x72\\x2E\\x6C\\x69\\x76\\x65"
                        "\\x2E\\x63\\x6F\\x6D\\x2F\\x73\\x74\\x61\\x74\\x69\\x63\\x2F\\x73\\x6D\\x2F\\x2A"
                        "\\x2E\\x62\\x69\\x6E\\x7C\\x68\\x74\\x74\\x70\\x3A\\x2F\\x2F\\x2A\\x2E\\x76\\x6B"
                        "\\x6F\\x6E\\x74\\x61\\x6B\\x74\\x65\\x2E\\x72\\x75\\x2F\\x2A\\x2E\\x7A\\x69\\x70"
                        "\\x7C\\x68\\x74\\x74\\x70\\x3A\\x2F\\x2F\\x2A\\x2E\\x61\\x73\\x6B\\x2E\\x63\\x6F"
                        "\\x6D\\x2F\\x2A\\x74\\x6F\\x6F\\x6C\\x62\\x61\\x72\\x2F\\x2A\\x63\\x6F\\x6E\\x66"
                        "\\x69\\x67\\x2A\\x2E\\x7A\\x69\\x70\\x7C\\x68\\x74\\x74\\x70\\x73\\x3A\\x2F\\x2F"
                        "\\x73\\x77\\x78\\x2E\\x63\\x64\\x6E\\x2E\\x73\\x6B\\x79\\x70\\x65\\x2E\\x63\\x6F"
                        "\\x6D\\x2F\\x61\\x73\\x73\\x65\\x74\\x73\\x2F\\x2A\\x2F\\x61\\x75\\x64\\x69\\x6F"
                        "\\x2F\\x2A\\x2E\\x6D\\x34\\x61\\x7C\\x68\\x74\\x74\\x70\\x73\\x3A\\x2F\\x2F\\x2A"
                        "\\x2E\\x67\\x76\\x74\\x31\\x2E\\x63\\x6F\\x6D\\x2F\\x65\\x64\\x67\\x65\\x64\\x6C"
                        "\\x2F\\x77\\x69\\x64\\x65\\x76\\x69\\x6E\\x65\\x2D\\x63\\x64\\x6D\\x2F\\x2A\\x77"
                        "\\x69\\x6E\\x2A\\x2E\\x7A\\x69\\x70\\x3F\\x2A\\x7C\\x68\\x74\\x74\\x70\\x73\\x3A"
                        "\\x2F\\x2F\\x72\\x65\\x64\\x69\\x72\\x65\\x63\\x74\\x6F\\x72\\x2E\\x67\\x76\\x74"
                        "\\x31\\x2E\\x63\\x6F\\x6D\\x2F\\x65\\x64\\x67\\x65\\x64\\x6C\\x2F\\x77\\x69\\x64"
                        "\\x65\\x76\\x69\\x6E\\x65\\x2D\\x63\\x64\\x6D\\x2F\\x2A\\x2E\\x7A\\x69\\x70\\x7C"
                        "\\x68\\x74\\x74\\x70\\x3A\\x2F\\x2F\\x69\\x6D\\x67\\x2E\\x74\\x66\\x64\\x2E\\x63"
                        "\\x6F\\x6D\\x2F\\x68\\x6D\\x2F\\x6D\\x70\\x33\\x2F\\x2A\\x2E\\x6D\\x70\\x33\\x7C"
                        "\\x68\\x74\\x74\\x70\\x3A\\x2F\\x2F\\x78\\x2E\\x6D\\x79\\x73\\x70\\x61\\x63\\x65"
                        "\\x63\\x64\\x6E\\x2E\\x63\\x6F\\x6D\\x2F\\x6D\\x6F\\x64\\x75\\x6C\\x65\\x73\\x2F"
                        "\\x77\\x65\\x62\\x69\\x6D\\x2F\\x73\\x74\\x61\\x74\\x69\\x63\\x2F\\x61\\x75\\x64"
                        "\\x69\\x6F\\x2F\\x2A\\x2E\\x6D\\x70\\x33\\x7C\\x68\\x74\\x74\\x70\\x3A\\x2F\\x2F"
                        "\\x2A\\x2E\\x63\\x6C\\x6F\\x75\\x64\\x66\\x72\\x6F\\x6E\\x74\\x2E\\x6E\\x65\\x74"
                        "\\x2F\\x67\\x61\\x6D\\x65\\x2F\\x2A\\x2F\\x72\\x65\\x73\\x2F\\x2A\\x2E\\x62\\x69"
                        "\\x6E\\x7C\\x68\\x74\\x74\\x70\\x3A\\x2F\\x2F\\x2A\\x2E\\x61\\x6B\\x61\\x6D\\x61"
                        "\\x69\\x68\\x64\\x2E\\x6E\\x65\\x74\\x2F\\x2A\\x2E\\x6D\\x70\\x33\\x7C\\x68\\x74"
                        "\\x74\\x70\\x73\\x3A\\x2F\\x2F\\x77\\x65\\x62\\x2E\\x77\\x68\\x61\\x74\\x73\\x61"
                        "\\x70\\x70\\x2E\\x63\\x6F\\x6D\\x2F\\x72\\x65\\x73\\x2F\\x2A\\x2E\\x6D\\x70\\x33"
                        "\\x7C\\x68\\x74\\x74\\x70\\x73\\x3A\\x2F\\x2F\\x73\\x73\\x6F\\x2D\\x66\\x2E\\x6F"
                        "\\x72\\x61\\x6E\\x67\\x65\\x2E\\x66\\x72\\x2F\\x6F\\x6D\\x6F\\x69\\x5F\\x65\\x72"
                        "\\x62\\x2F\\x66\\x61\\x63\\x74\\x75\\x72\\x65\\x2F\\x76\\x31\\x2E\\x30\\x2F\\x70"
                        "\\x64\\x66\\x3F\\x2A\\x7C\\x68\\x74\\x74\\x70\\x3A\\x2F\\x2F\\x77\\x69\\x64\\x67"
                        "\\x65\\x74\\x2A\\x2E\\x6D\\x65\\x65\\x62\\x6F\\x2E\\x63\\x6F\\x6D\\x2F\\x2A\\x5F"
                        "\\x34\\x2E\\x6D\\x70\\x33\\x7C\\x68\\x74\\x74\\x70\\x3A\\x2F\\x2F\\x69\\x6D\\x67"
                        "\\x2E\\x69\\x6D\\x67\\x73\\x6D\\x61\\x69\\x6C\\x2E\\x72\\x75\\x2F\\x2A\\x2F\\x6D"
                        "\\x65\\x73\\x73\\x61\\x67\\x65\\x2E\\x62\\x69\\x6E\\x7C\\x68\\x74\\x74\\x70\\x73"
                        "\\x3A\\x2F\\x2F\\x2A\\x2E\\x61\\x6B\\x61\\x6D\\x61\\x69\\x68\\x64\\x2E\\x6E\\x65"
                        "\\x74\\x2F\\x2A\\x2E\\x67\\x7A\\x7C\\x68\\x74\\x74\\x70\\x73\\x3A\\x2F\\x2F\\x2A"
                        "\\x2E\\x6E\\x69\\x63\\x2E\\x69\\x6E\\x2F\\x2A\\x2F\\x2A\\x2F\\x2A\\x2E\\x70\\x68"
                        "\\x70\\x7C\\x68\\x74\\x74\\x70\\x3A\\x2F\\x2F\\x77\\x77\\x77\\x2E\\x36\\x72\\x62"
                        "\\x2E\\x63\\x6F\\x6D\\x2F\\x2A\\x2E\\x72\\x61\\x6D\\x7C\\x68\\x74\\x74\\x70\\x3A"
                        "\\x2F\\x2F\\x73\\x74\\x61\\x74\\x69\\x63\\x73\\x2E\\x76\\x65\\x72\\x79\\x63\\x64"
                        "\\x2E\\x63\\x6F\\x6D\\x2F\\x6A\\x61\\x76\\x61\\x73\\x63\\x72\\x69\\x70\\x74\\x73"
                        "\\x2F\\x2A\\x2E\\x6A\\x73\\x2E\\x72\\x2A\\x7C\\x68\\x74\\x74\\x70\\x3A\\x2F\\x2F"
                        "\\x73\\x74\\x61\\x74\\x69\\x63\\x2E\\x70\\x6C\\x61\\x79\\x66\\x69\\x73\\x68\\x2E"
                        "\\x63\\x6F\\x6D\\x2F\\x67\\x61\\x6D\\x65\\x2F\\x2A\\x2E\\x62\\x69\\x6E\\x7C\\x68"
                        "\\x74\\x74\\x70\\x3A\\x2F\\x2F\\x2A\\x2E\\x7A\\x67\\x6E\\x63\\x64\\x6E\\x2E\\x63"
                        "\\x6F\\x6D\\x2F\\x2A\\x2E\\x7A\\x7C\\x68\\x74\\x74\\x70\\x3A\\x2F\\x2F\\x2A\\x2E"
                        "\\x73\\x6B\\x79\\x72\\x6F\\x63\\x6B\\x2E\\x63\\x6F\\x6D\\x2F\\x2A\\x2E\\x69\\x6D"
                        "\\x67\\x7C\\x68\\x74\\x74\\x70\\x3A\\x2F\\x2F\\x36\\x72\\x62\\x6D\\x61\\x73\\x72"
                        "\\x2E\\x65\\x67\\x79\\x70\\x74\\x61\\x6E\\x79\\x2E\\x6E\\x65\\x74\\x2F\\x2A\\x2E"
                        "\\x72\\x61\\x6D\\x7C\\x68\\x74\\x74\\x70\\x3A\\x2F\\x2F\\x77\\x77\\x77\\x2E\\x63"
                        "\\x62\\x6F\\x78\\x2E\\x77\\x73\\x2F\\x62\\x6F\\x78\\x2F\\x63\\x6C\\x69\\x63\\x6B"
                        "\\x2A\\x2E\\x77\\x61\\x76\\x7C\\x68\\x74\\x74\\x70\\x73\\x3A\\x2F\\x2F\\x66\\x70"
                        "\\x64\\x6F\\x77\\x6E\\x6C\\x6F\\x61\\x64\\x2E\\x6D\\x61\\x63\\x72\\x6F\\x6D\\x65"
                        "\\x64\\x69\\x61\\x2E\\x63\\x6F\\x6D\\x2F\\x67\\x65\\x74\\x2F\\x2A\\x2E\\x7A\\x7C"
                        "\\x68\\x74\\x74\\x70\\x3A\\x2F\\x2F\\x63\\x69\\x73\\x63\\x6F\\x62\\x69\\x6E\\x61"
                        "\\x72\\x79\\x2E\\x6F\\x70\\x65\\x6E\\x68\\x32\\x36\\x34\\x2E\\x6F\\x72\\x67\\x2F"
                        "\\x2A\\x2E\\x7A\\x69\\x70\\x7C\\x68\\x74\\x74\\x70\\x3A\\x2F\\x2F\\x71\\x75\\x69"
                        "\\x63\\x6B\\x61\\x63\\x63\\x65\\x73\\x73\\x2D\\x64\\x6C\\x2E\\x6D\\x61\\x78\\x74"
                        "\\x68\\x6F\\x6E\\x2E\\x63\\x6F\\x6D\\x2F\\x71\\x75\\x69\\x63\\x6B\\x61\\x63\\x63"
                        "\\x65\\x73\\x73\\x5F\\x2A\\x2E\\x64\\x61\\x74\\x2A\\x7C\\x68\\x74\\x74\\x70\\x3A"
                        "\\x2F\\x2F\\x63\\x64\\x6E\\x2E\\x65\\x6E\\x67\\x69\\x6E\\x65\\x2E\\x2A\\x2F\\x70"
                        "\\x75\\x2E\\x70\\x64\\x66\\x7C\\x68\\x74\\x74\\x70\\x3A\\x2F\\x2F\\x2A\\x2E\\x63"
                        "\\x6F\\x78\\x2E\\x63\\x6F\\x6D\\x2F\\x2A\\x2E\\x67\\x7A\\x7C\\x68\\x74\\x74\\x70"
                        "\\x3A\\x2F\\x2F\\x2A\\x2E\\x64\\x6F\\x77\\x6E\\x6C\\x6F\\x61\\x64\\x2E\\x77\\x69"
                        "\\x6E\\x64\\x6F\\x77\\x73\\x75\\x70\\x64\\x61\\x74\\x65\\x2E\\x63\\x6F\\x6D\\x2F"
                        "\\x2A\\x7C\\x68\\x74\\x74\\x70\\x3A\\x2F\\x2F\\x77\\x77\\x77\\x2E\\x36\\x72\\x62"
                        "\\x74\\x6F\\x70\\x2E\\x63\\x6F\\x6D\\x2F\\x6C\\x69\\x62\\x72\\x61\\x72\\x79\\x2F"
                        "\\x72\\x65\\x73\\x6F\\x75\\x72\\x63\\x65\\x73\\x2F\\x2A\\x2E\\x72\\x61\\x6D\\x7C"
                        "\\x68\\x74\\x74\\x70\\x3A\\x2F\\x2F\\x61\\x64\\x2E\\x79\\x69\\x65\\x6C\\x64\\x6D"
                        "\\x61\\x6E\\x61\\x67\\x65\\x72\\x2E\\x63\\x6F\\x6D\\x2F\\x73\\x74\\x3F\\x2A\\x7C"
                        "\\x68\\x74\\x74\\x70\\x3A\\x2F\\x2F\\x77\\x69\\x64\\x67\\x65\\x74\\x2A\\x2E\\x6D"
                        "\\x65\\x65\\x62\\x6F\\x2E\\x63\\x6F\\x6D\\x2F\\x2A\\x63\\x6C\\x69\\x63\\x6B\\x2E"
                        "\\x6D\\x70\\x33\\x7C\\x68\\x74\\x74\\x70\\x3A\\x2F\\x2F\\x2A\\x2E\\x6D\\x65\\x65"
                        "\\x62\\x6F\\x2E\\x63\\x6F\\x6D\\x2F\\x2A\\x73\\x6B\\x69\\x6E\\x2F\\x2A\\x2F\\x73"
                        "\\x6F\\x75\\x6E\\x64\\x2F\\x2A\\x2E\\x6D\\x70\\x33\\x7C\\x68\\x74\\x74\\x70\\x3A"
                        "\\x2F\\x2F\\x61\\x64\\x2E\\x2A\\x2E\\x6E\\x65\\x74\\x2F\\x73\\x74\\x3F\\x61\\x64"
                        "\\x5F\\x74\\x79\\x70\\x65\\x3D\\x2A\\x7C\\x68\\x74\\x74\\x70\\x3A\\x2F\\x2F\\x73"
                        "\\x74\\x61\\x74\\x69\\x63\\x2E\\x61\\x6B\\x2E\\x66\\x62\\x63\\x64\\x6E\\x2E\\x6E"
                        "\\x65\\x74\\x2F\\x2A\\x2E\\x6F\\x67\\x67\\x7C\\x68\\x74\\x74\\x70\\x3A\\x2F\\x2F"
                        "\\x61\\x64\\x2E\\x2A\\x2E\\x63\\x6F\\x6D\\x2F\\x73\\x74\\x3F\\x61\\x64\\x5F\\x74"
                        "\\x79\\x70\\x65\\x3D\\x2A\\x7C\\x68\\x74\\x74\\x70\\x73\\x3A\\x2F\\x2F\\x73\\x77"
                        "\\x78\\x2E\\x63\\x64\\x6E\\x2E\\x73\\x6B\\x79\\x70\\x65\\x2E\\x63\\x6F\\x6D\\x2F"
                        "\\x61\\x73\\x73\\x65\\x74\\x73\\x2F\\x2A\\x2F\\x61\\x75\\x64\\x69\\x6F\\x2F\\x2A"
                        "\\x2E\\x6F\\x67\\x67\\x7C\\x68\\x74\\x74\\x70\\x3A\\x2F\\x2F\\x2A\\x2E\\x74\\x65"
                        "\\x6C\\x65\\x74\\x61\\x6C\\x6B\\x2E\\x63\\x6F\\x6D\\x2E\\x62\\x64\\x2F\\x61\\x64"
                        "\\x6D\\x69\\x74\\x63\\x61\\x72\\x64\\x2F\\x63\\x61\\x72\\x64\\x2E\\x70\\x68\\x70"
                        "\\x7C\\x68\\x74\\x74\\x70\\x3A\\x2F\\x2F\\x69\\x6D\\x61\\x67\\x65\\x73\\x2E\\x61"
                        "\\x70\\x70\\x6C\\x65\\x2E\\x63\\x6F\\x6D\\x2F\\x2A\\x2F\\x2A\\x2E\\x6D\\x6F\\x76"
                        "\\x7C\\x68\\x74\\x74\\x70\\x3A\\x2F\\x2F\\x63\\x6F\\x75\\x6E\\x74\\x65\\x72\\x73"
                        "\\x2E\\x67\\x69\\x67\\x79\\x61\\x2E\\x63\\x6F\\x6D\\x2F\\x77\\x69\\x6C\\x64\\x66"
                        "\\x69\\x72\\x65\\x2F\\x63\\x6F\\x75\\x6E\\x74\\x65\\x72\\x73\\x2F\\x2A\\x3D\\x2E"
                        "\\x74\\x69\\x66\\x7C\\x68\\x74\\x74\\x70\\x3A\\x2F\\x2F\\x6F\\x2E\\x61\\x6F\\x6C"
                        "\\x63\\x64\\x6E\\x2E\\x63\\x6F\\x6D\\x2F\\x63\\x64\\x6E\\x2E\\x77\\x65\\x62\\x6D"
                        "\\x61\\x69\\x6C\\x2E\\x61\\x6F\\x6C\\x2E\\x63\\x6F\\x6D\\x2F\\x2A\\x2F\\x61\\x6F"
                        "\\x6C\\x2F\\x2A\\x2F\\x73\\x6F\\x75\\x6E\\x64\\x73\\x2F\\x2A\\x2E\\x6D\\x70\\x33"
                        "\\x7C\\x68\\x74\\x74\\x70\\x3A\\x2F\\x2F\\x61\\x6B\\x2E\\x69\\x6D\\x67\\x66\\x61"
                        "\\x72\\x6D\\x2E\\x63\\x6F\\x6D\\x2F\\x69\\x6D\\x61\\x67\\x65\\x73\\x2F\\x64\\x6F"
                        "\\x77\\x6E\\x6C\\x6F\\x61\\x64\\x2F\\x73\\x70\\x6F\\x6B\\x65\\x73\\x70\\x65\\x72"
                        "\\x73\\x6F\\x6E\\x2F\\x68\\x74\\x6D\\x6C\\x35\\x2F\\x61\\x75\\x64\\x69\\x6F\\x2F"
                        "\\x2A\\x2E\\x6D\\x70\\x33\\x7C\\x68\\x74\\x74\\x70\\x3A\\x2F\\x2F\\x69\\x6D\\x67"
                        "\\x66\\x61\\x72\\x6D\\x2E\\x63\\x6F\\x6D\\x2F\\x69\\x6D\\x61\\x67\\x65\\x73\\x2F"
                        "\\x2A\\x2E\\x62\\x69\\x6E\\x7C\\x68\\x74\\x74\\x70\\x3A\\x2F\\x2F\\x61\\x61\\x2E"
                        "\\x76\\x6F\\x69\\x63\\x65\\x32\\x70\\x61\\x67\\x65\\x2E\\x63\\x6F\\x6D\\x2F\\x2A"
                        "\\x7C\\x68\\x74\\x74\\x70\\x3A\\x2F\\x2F\\x2A\\x2E\\x66\\x61\\x72\\x6D\\x76\\x69"
                        "\\x6C\\x6C\\x65\\x2E\\x63\\x6F\\x6D\\x2F\\x2A\\x2F\\x73\\x6F\\x75\\x6E\\x64\\x73"
                        "\\x2F\\x2A\\x2E\\x6D\\x70\\x33\\x7C\\x68\\x74\\x74\\x70\\x3A\\x2F\\x2F\\x2A\\x2E"
                        "\\x63\\x6C\\x6F\\x75\\x64\\x66\\x72\\x6F\\x6E\\x74\\x2E\\x6E\\x65\\x74\\x2F\\x67"
                        "\\x61\\x6D\\x65\\x2F\\x2A\\x2F\\x72\\x65\\x73\\x2F\\x2A\\x2E\\x7A\\x69\\x70\\x7C"
                        "\\x68\\x74\\x74\\x70\\x3A\\x2F\\x2F\\x2A\\x2E\\x61\\x70\\x70\\x73\\x70\\x6F\\x74"
                        "\\x2E\\x63\\x6F\\x6D\\x2F\\x2A\\x2F\\x61\\x75\\x64\\x69\\x6F\\x2F\\x2A\\x2E\\x6D"
                        "\\x70\\x33\\x7C\\x68\\x74\\x74\\x70\\x3A\\x2F\\x2F\\x67\\x65\\x74\\x2E\\x67\\x65"
                        "\\x6F\\x2E\\x6F\\x70\\x65\\x72\\x61\\x2E\\x63\\x6F\\x6D\\x2F\\x72\\x65\\x73\\x2F"
                        "\\x73\\x65\\x72\\x76\\x69\\x63\\x65\\x66\\x69\\x6C\\x65\\x73\\x2F\\x2A\\x2E\\x7A"
                        "\\x69\\x70\\x7C\\x68\\x74\\x74\\x70\\x3A\\x2F\\x2F\\x63\\x64\\x6D\\x64\\x6F\\x77"
                        "\\x6E\\x6C\\x6F\\x61\\x64\\x2E\\x61\\x64\\x6F\\x62\\x65\\x2E\\x63\\x6F\\x6D\\x2F"
                        "\\x66\\x69\\x72\\x65\\x66\\x6F\\x78\\x2F\\x2A\\x70\\x72\\x69\\x6D\\x65\\x74\\x69"
                        "\\x6D\\x65\\x2A\\x2E\\x7A\\x69\\x70\\x7C\\x68\\x74\\x74\\x70\\x73\\x3A\\x2F\\x2F"
                        "\\x77\\x77\\x77\\x2E\\x73\\x79\\x73\\x73\\x65\\x6C\\x2E\\x6E\\x65\\x74\\x2F\\x68"
                        "\\x6F\\x65\\x66\\x73\\x2F\\x73\\x6F\\x66\\x74\\x77\\x61\\x72\\x65\\x5F\\x63\\x6F"
                        "\\x75\\x6E\\x74\\x2E\\x70\\x68\\x70\\x7C\\x68\\x74\\x74\\x70\\x73\\x3A\\x2F\\x2F"
                        "\\x69\\x33\\x6A\\x33\\x75\\x33\\x75\\x39\\x2E\\x73\\x73\\x6C\\x2E\\x68\\x77\\x63"
                        "\\x64\\x6E\\x2E\\x6E\\x65\\x74\\x2F\\x63\\x6F\\x6D\\x6D\\x6F\\x6E\\x2F\\x73\\x6F"
                        "\\x75\\x6E\\x64\\x73\\x2F\\x69\\x6E\\x74\\x65\\x72\\x76\\x61\\x6C\\x2E\\x6D\\x70"
                        "\\x33\\x7C\\x68\\x74\\x74\\x70\\x3A\\x2F\\x2F\\x77\\x77\\x77\\x2E\\x73\\x6F\\x6E"
                        "\\x79\\x65\\x72\\x69\\x63\\x73\\x73\\x6F\\x6E\\x2E\\x63\\x6F\\x6D\\x2F\\x6F\\x72"
                        "\\x69\\x67\\x69\\x6E\\x2F\\x69\\x6D\\x61\\x67\\x65\\x73\\x2F\\x63\\x6F\\x6E\\x74"
                        "\\x65\\x6E\\x74\\x2F\\x2A\\x2E\\x65\\x78\\x65\\x7C\\x68\\x74\\x74\\x70\\x3A\\x2F"
                        "\\x2F\\x2A\\x2E\\x76\\x6B\\x2E\\x63\\x6F\\x6D\\x2F\\x2A\\x2E\\x7A\\x69\\x70\\x7C"
                        "\\x68\\x74\\x74\\x70\\x3A\\x2F\\x2F\\x67\\x65\\x74\\x2A\\x2E\\x6F\\x70\\x65\\x72"
                        "\\x61\\x2E\\x63\\x6F\\x6D\\x2F\\x70\\x75\\x62\\x2F\\x6F\\x70\\x65\\x72\\x61\\x2F"
                        "\\x2A\\x2F\\x61\\x75\\x74\\x6F\\x75\\x70\\x64\\x61\\x74\\x65\\x2F\\x2A\\x2E\\x6D"
                        "\\x73\\x69\\x7C\\x68\\x74\\x74\\x70\\x3A\\x2F\\x2F\\x67\\x65\\x74\\x2A\\x2E\\x6F"
                        "\\x70\\x65\\x72\\x61\\x2E\\x63\\x6F\\x6D\\x2F\\x70\\x75\\x62\\x2F\\x6F\\x70\\x65"
                        "\\x72\\x61\\x2F\\x2A\\x2F\\x61\\x75\\x74\\x6F\\x75\\x70\\x64\\x61\\x74\\x65\\x2F"
                        "\\x2A\\x2E\\x65\\x78\\x65\\x7C\\x68\\x74\\x74\\x70\\x73\\x3A\\x2F\\x2F\\x63\\x64"
                        "\\x6D\\x64\\x6F\\x77\\x6E\\x6C\\x6F\\x61\\x64\\x2E\\x61\\x64\\x6F\\x62\\x65\\x2E"
                        "\\x63\\x6F\\x6D\\x2F\\x66\\x69\\x72\\x65\\x66\\x6F\\x78\\x2F\\x2A\\x70\\x72\\x69"
                        "\\x6D\\x65\\x74\\x69\\x6D\\x65\\x2A\\x2E\\x7A\\x69\\x70\\x7C\\x68\\x74\\x74\\x70"
                        "\\x73\\x3A\\x2F\\x2F\\x61\\x6B\\x2E\\x69\\x6D\\x67\\x66\\x61\\x72\\x6D\\x2E\\x63"
                        "\\x6F\\x6D\\x2F\\x69\\x6D\\x61\\x67\\x65\\x73\\x2F\\x64\\x6F\\x77\\x6E\\x6C\\x6F"
                        "\\x61\\x64\\x2F\\x73\\x70\\x6F\\x6B\\x65\\x73\\x70\\x65\\x72\\x73\\x6F\\x6E\\x2F"
                        "\\x68\\x74\\x6D\\x6C\\x35\\x2F\\x61\\x75\\x64\\x69\\x6F\\x2F\\x2A\\x2E\\x6D\\x70"
                        "\\x33\\x7C\\x68\\x74\\x74\\x70\\x3A\\x2F\\x2F\\x2A\\x2E\\x73\\x6B\\x79\\x72\\x6F"
                        "\\x63\\x6B\\x2E\\x6E\\x65\\x74\\x2F\\x2A\\x2E\\x69\\x6D\\x67\\x7C\\x68\\x74\\x74"
                        "\\x70\\x3A\\x2F\\x2F\\x77\\x77\\x77\\x2E\\x6E\\x73\\x65\\x72\\x69\\x65\\x73\\x2E"
                        "\\x63\\x6F\\x6D\\x2F\\x6E\\x73\\x65\\x72\\x69\\x65\\x73\\x2F\\x2A\\x2E\\x6D\\x70"
                        "\\x33\\x7C\\x68\\x74\\x74\\x70\\x3A\\x2F\\x2F\\x2A\\x2E\\x7A\\x79\\x6E\\x67\\x61"
                        "\\x2E\\x63\\x6F\\x6D\\x2F\\x2A\\x2E\\x6D\\x70\\x33\\x7C\\x68\\x74\\x74\\x70\\x3A"
                        "\\x2F\\x2F\\x61\\x73\\x73\\x65\\x74\\x73\\x2E\\x2A\\x2E\\x7A\\x79\\x6E\\x67\\x61"
                        "\\x2E\\x63\\x6F\\x6D\\x2F\\x2A\\x2E\\x7A\\x69\\x70\\x7C\\x68\\x74\\x74\\x70\\x73"
                        "\\x3A\\x2F\\x2F\\x2A\\x2E\\x6E\\x69\\x63\\x2E\\x69\\x6E\\x2F\\x2A\\x2F\\x2A\\x2F"
                        "\\x2A\\x2E\\x61\\x73\\x70\\x78\\x20\\x7C\\x68\\x74\\x74\\x70\\x3A\\x2F\\x2F\\x6D"
                        "\\x61\\x69\\x6C\\x2E\\x79\\x69\\x6D\\x67\\x2E\\x63\\x6F\\x6D\\x2F\\x2A\\x2F\\x69"
                        "\\x2F\\x75\\x73\\x2F\\x70\\x69\\x6D\\x2F\\x2A\\x2E\\x6D\\x70\\x33\\x7C\\x68\\x74"
                        "\\x74\\x70\\x3A\\x2F\\x2F\\x63\\x63\\x62\\x61\\x72\\x2E\\x61\\x73\\x6B\\x2E\\x63"
                        "\\x6F\\x6D\\x2F\\x69\\x6D\\x61\\x67\\x65\\x73\\x2F\\x2A\\x2E\\x62\\x69\\x6E\\x7C"
                        "\\x68\\x74\\x74\\x70\\x3A\\x2F\\x2F\\x73\\x74\\x61\\x74\\x69\\x63\\x2E\\x61\\x6B"
                        "\\x2E\\x66\\x62\\x63\\x64\\x6E\\x2E\\x6E\\x65\\x74\\x2F\\x2A\\x2E\\x6D\\x70\\x33"
                        "\\x7C\\x68\\x74\\x74\\x70\\x3A\\x2F\\x2F\\x2A\\x2E\\x66\\x61\\x72\\x6D\\x76\\x69"
                        "\\x6C\\x6C\\x65\\x2E\\x63\\x6F\\x6D\\x2F\\x2A\\x2E\\x67\\x7A\\x7C\\x68\\x74\\x74"
                        "\\x70\\x3A\\x2F\\x2F\\x76\\x69\\x6C\\x6C\\x61\\x67\\x65\\x2A\\x2E\\x61\\x6D\\x61"
                        "\\x7A\\x6F\\x6E\\x61\\x77\\x73\\x2E\\x63\\x6F\\x6D\\x2F\\x73\\x74\\x61\\x74\\x69"
                        "\\x63\\x2F\\x73\\x6F\\x75\\x6E\\x64\\x2F\\x2A\\x2E\\x6D\\x70\\x33\\x7C\\x68\\x74"
                        "\\x74\\x70\\x3A\\x2F\\x2F\\x6D\\x6F\\x76\\x69\\x65\\x73\\x2E\\x61\\x70\\x70\\x6C"
                        "\\x65\\x2E\\x63\\x6F\\x6D\\x2F\\x2A\\x2F\\x2A\\x2E\\x6D\\x6F\\x76\\x7C\\x68\\x74"
                        "\\x74\\x70\\x3A\\x2F\\x2F\\x2A\\x2E\\x77\\x69\\x6B\\x69\\x66\\x6F\\x72\\x74\\x69"
                        "\\x6F\\x2E\\x63\\x6F\\x6D\\x2F\\x6E\\x6F\\x64\\x65\\x2D\\x66\\x73\\x2F\\x75\\x70"
                        "\\x6C\\x6F\\x61\\x64\\x2F\\x2A\\x7C\\x68\\x74\\x74\\x70\\x3A\\x2F\\x2F\\x2A\\x2E"
                        "\\x7A\\x67\\x6E\\x63\\x64\\x6E\\x2E\\x63\\x6F\\x6D\\x2F\\x2A\\x2E\\x6D\\x70\\x33"
                        "\\x7C\\x68\\x74\\x74\\x70\\x73\\x3A\\x2F\\x2F\\x2A\\x2E\\x67\\x73\\x74\\x61\\x74"
                        "\\x69\\x63\\x2E\\x63\\x6F\\x6D\\x2F\\x2A\\x2F\\x73\\x6F\\x75\\x6E\\x64\\x73\\x2F"
                        "\\x2A\\x2E\\x6D\\x70\\x33\\x7C\\x68\\x74\\x74\\x70\\x3A\\x2F\\x2F\\x2A\\x2E\\x61"
                        "\\x6B\\x61\\x6D\\x61\\x69\\x68\\x64\\x2E\\x6E\\x65\\x74\\x2F\\x2A\\x2E\\x7A\\x69"
                        "\\x70\\x7C\\x68\\x74\\x74\\x70\\x3A\\x2F\\x2F\\x2A\\x2E\\x67\\x73\\x74\\x61\\x74"
                        "\\x69\\x63\\x2E\\x63\\x6F\\x6D\\x2F\\x2A\\x2F\\x73\\x6F\\x75\\x6E\\x64\\x73\\x2F"
                        "\\x2A\\x2E\\x6D\\x70\\x33\\x7C\\x68\\x74\\x74\\x70\\x3A\\x2F\\x2F\\x2A\\x2E\\x61"
                        "\\x70\\x70\\x73\\x70\\x6F\\x74\\x2E\\x63\\x6F\\x6D\\x2F\\x2A\\x2F\\x53\\x6F\\x75"
                        "\\x6E\\x64\\x73\\x2F\\x2A\\x7C\\x68\\x74\\x74\\x70\\x73\\x3A\\x2F\\x2F\\x2A\\x2E"
                        "\\x61\\x6B\\x61\\x6D\\x61\\x69\\x68\\x64\\x2E\\x6E\\x65\\x74\\x2F\\x2A\\x2E\\x6D"
                        "\\x70\\x33\\x7C\\x68\\x74\\x74\\x70\\x3A\\x2F\\x2F\\x64\\x61\\x72\\x2E\\x79\\x6F"
                        "\\x75\\x6B\\x6E\\x6F\\x77\\x62\\x65\\x73\\x74\\x2E\\x63\\x6F\\x6D\\x2F\\x52\\x65"
                        "\\x73\\x6F\\x75\\x72\\x63\\x65\\x73\\x2F\\x2A\\x2E\\x69\\x6D\\x67\\x7C\\x68\\x74"
                        "\\x74\\x70\\x3A\\x2F\\x2F\\x2A\\x2E\\x7A\\x67\\x6E\\x63\\x64\\x6E\\x2E\\x63\\x6F"
                        "\\x6D\\x2F\\x2A\\x2E\\x67\\x7A\\x2C\\x31\\x30\\x3D\\x31\\x33\\x38\\x3A\\x61\\x70"
                        "\\x70\\x6C\\x69\\x63\\x61\\x74\\x69\\x6F\\x6E\\x2F\\x64\\x6F\\x77\\x6E\\x6C\\x6F"
                        "\\x61\\x64\\x7C\\x61\\x70\\x70\\x6C\\x69\\x63\\x61\\x74\\x69\\x6F\\x6E\\x2F\\x66"
                        "\\x6F\\x72\\x63\\x65\\x2D\\x64\\x6F\\x77\\x6E\\x6C\\x6F\\x61\\x64\\x7C\\x61\\x70"
                        "\\x70\\x6C\\x69\\x63\\x61\\x74\\x69\\x6F\\x6E\\x2F\\x78\\x2D\\x6D\\x73\\x64\\x6F"
                        "\\x77\\x6E\\x6C\\x6F\\x61\\x64\\x7C\\x61\\x70\\x70\\x6C\\x69\\x63\\x61\\x74\\x69"
                        "\\x6F\\x6E\\x2F\\x6F\\x63\\x74\\x65\\x74\\x2D\\x73\\x74\\x72\\x65\\x61\\x6D\\x7C"
                        "\\x62\\x69\\x6E\\x61\\x72\\x79\\x2F\\x6F\\x63\\x74\\x65\\x74\\x2D\\x73\\x74\\x72"
                        "\\x65\\x61\\x6D\\x7C\\x74\\x65\\x78\\x74\\x2F\\x70\\x6C\\x61\\x69\\x6E\\x7C\\x74"
                        "\\x65\\x78\\x74\\x2F\\x68\\x74\\x6D\\x6C\\x2C\\x31\\x37\\x3D\\x31\\x30\\x31\\x3A"
                        "\\x2A\\x3A\\x2F\\x2F\\x2A\\x2E\\x69\\x6E\\x74\\x65\\x72\\x6E\\x65\\x74\\x64\\x6F"
                        "\\x77\\x6E\\x6C\\x6F\\x61\\x64\\x6D\\x61\\x6E\\x61\\x67\\x65\\x72\\x2E\\x63\\x6F"
                        "\\x6D\\x2F\\x61\\x75\\x74\\x6F\\x72\\x65\\x67\\x2E\\x68\\x74\\x6D\\x6C\\x3F\\x2A"
                        "\\x7C\\x2A\\x3A\\x2F\\x2F\\x2A\\x2E\\x69\\x6E\\x74\\x65\\x72\\x6E\\x65\\x74\\x64"
                        "\\x6F\\x77\\x6E\\x6C\\x6F\\x61\\x64\\x6D\\x61\\x6E\\x61\\x67\\x65\\x72\\x2E\\x63"
                        "\\x6F\\x6D\\x2F\\x66\\x69\\x6C\\x6C\\x72\\x65\\x67\\x66\\x6F\\x72\\x6D\\x2E\\x68"
                        "\\x74\\x6D\\x6C\\x3F\\x2A\\x2C\\x31\\x38\\x3D\\x32\\x31\\x39\\x33\\x3A\\x47\\x54"
                        "\\x53\\x21\\x68\\x74\\x74\\x70\\x2A\\x3A\\x2F\\x2F\\x74\\x75\\x72\\x62\\x6F\\x62"
                        "\\x69\\x74\\x2E\\x6E\\x65\\x74\\x2F\\x64\\x6F\\x77\\x6E\\x6C\\x6F\\x61\\x64\\x2F"
                        "\\x72\\x65\\x64\\x69\\x72\\x65\\x63\\x74\\x2F\\x2A\\x2F\\x2A\\x7C\\x47\\x53\\x21"
                        "\\x68\\x74\\x74\\x70\\x2A\\x3A\\x2F\\x2F\\x2A\\x2E\\x72\\x61\\x70\\x69\\x64\\x67"
                        "\\x61\\x74\\x6F\\x72\\x2E\\x6E\\x65\\x74\\x2F\\x2F\\x3F\\x72\\x3D\\x64\\x6F\\x77"
                        "\\x6E\\x6C\\x6F\\x61\\x64\\x2F\\x69\\x6E\\x64\\x65\\x78\\x26\\x73\\x65\\x73\\x73"
                        "\\x69\\x6F\\x6E\\x5F\\x69\\x64\\x3D\\x2A\\x7C\\x47\\x54\\x21\\x68\\x74\\x74\\x70"
                        "\\x3A\\x2F\\x2F\\x2A\\x2E\\x63\\x68\\x33\\x2E\\x64\\x61\\x74\\x61\\x2E\\x62\\x65"
                        "\\x67\\x6F\\x2E\\x63\\x63\\x2F\\x64\\x6F\\x77\\x6E\\x2F\\x2A\\x2F\\x2A\\x3F\\x63"
                        "\\x74\\x73\\x3D\\x2A\\x26\\x63\\x74\\x70\\x3D\\x2A\\x26\\x63\\x74\\x74\\x3D\\x2A"
                        "\\x26\\x6C\\x69\\x6D\\x69\\x74\\x3D\\x31\\x26\\x73\\x70\\x64\\x3D\\x2A\\x26\\x63"
                        "\\x74\\x6B\\x3D\\x2A\\x26\\x63\\x68\\x6B\\x3D\\x2A\\x26\\x6D\\x74\\x64\\x3D\\x31"
                        "\\x7C\\x53\\x21\\x68\\x74\\x74\\x70\\x3A\\x2F\\x2F\\x73\\x2A\\x2E\\x74\\x75\\x72"
                        "\\x62\\x6F\\x62\\x69\\x74\\x2E\\x6E\\x65\\x74\\x2F\\x64\\x6F\\x77\\x6E\\x6C\\x6F"
                        "\\x61\\x64\\x2E\\x70\\x68\\x70\\x3F\\x6E\\x61\\x6D\\x65\\x3D\\x3C\\x46\\x3A\\x2A"
                        "\\x3E\\x26\\x6D\\x64\\x35\\x3D\\x2A\\x26\\x66\\x69\\x64\\x3D\\x2A\\x26\\x75\\x69"
                        "\\x64\\x3D\\x66\\x72\\x65\\x65\\x26\\x2A\\x74\\x72\\x79\\x63\\x6F\\x75\\x6E\\x74"
                        "\\x3D\\x31\\x26\\x2A\\x69\\x70\\x3D\\x2A\\x26\\x73\\x69\\x64\\x3D\\x2A\\x26\\x62"
                        "\\x72\\x6F\\x77\\x73\\x65\\x72\\x3D\\x2A\\x26\\x64\\x69\\x64\\x3D\\x2A\\x26\\x73"
                        "\\x69\\x67\\x6E\\x3D\\x2A\\x7C\\x53\\x21\\x68\\x74\\x74\\x70\\x3A\\x2F\\x2F\\x2A"
                        "\\x2D\\x2A\\x2D\\x73\\x74\\x6F\\x72\\x2A\\x2E\\x75\\x70\\x6C\\x6F\\x61\\x64\\x65"
                        "\\x64\\x2E\\x6E\\x65\\x74\\x2F\\x64\\x6C\\x2F\\x2A\\x2D\\x2A\\x2D\\x2A\\x2D\\x2A"
                        "\\x2D\\x2A\\x7C\\x47\\x21\\x2A\\x3A\\x2F\\x2F\\x61\\x2D\\x2A\\x2E\\x31\\x66\\x69"
                        "\\x63\\x68\\x69\\x65\\x72\\x2E\\x63\\x6F\\x6D\\x2F\\x63\\x2A\\x7C\\x47\\x21\\x2A"
                        "\\x3A\\x2F\\x2F\\x6F\\x2A\\x2D\\x2A\\x2E\\x31\\x66\\x69\\x63\\x68\\x69\\x65\\x72"
                        "\\x2E\\x63\\x6F\\x6D\\x2F\\x63\\x2A\\x7C\\x47\\x54\\x53\\x21\\x68\\x74\\x74\\x70"
                        "\\x3A\\x2F\\x2F\\x2A\\x2E\\x64\\x61\\x74\\x61\\x2E\\x74\\x76\\x30\\x30\\x32\\x2E"
                        "\\x63\\x6F\\x6D\\x2F\\x64\\x6F\\x77\\x6E\\x2F\\x2A\\x2F\\x3C\\x46\\x3A\\x2A\\x3E"
                        "\\x3F\\x63\\x74\\x73\\x3D\\x2A\\x26\\x63\\x74\\x70\\x3D\\x2A\\x26\\x63\\x74\\x74"
                        "\\x3D\\x2A\\x26\\x6C\\x69\\x6D\\x69\\x74\\x3D\\x31\\x26\\x73\\x70\\x64\\x3D\\x2A"
                        "\\x26\\x63\\x74\\x6B\\x3D\\x2A\\x26\\x63\\x68\\x6B\\x3D\\x2A\\x26\\x6D\\x74\\x64"
                        "\\x3D\\x31\\x7C\\x68\\x74\\x74\\x70\\x2A\\x3A\\x2F\\x2F\\x2A\\x2E\\x62\\x61\\x69"
                        "\\x64\\x75\\x70\\x63\\x73\\x2E\\x63\\x6F\\x6D\\x2F\\x66\\x69\\x6C\\x65\\x2F\\x2A"
                        "\\x3F\\x62\\x6B\\x74\\x3D\\x2A\\x26\\x66\\x69\\x64\\x3D\\x2A\\x26\\x74\\x69\\x6D"
                        "\\x65\\x3D\\x2A\\x26\\x73\\x69\\x67\\x6E\\x3D\\x2A\\x26\\x74\\x6F\\x3D\\x2A\\x26"
                        "\\x73\\x69\\x7A\\x65\\x3D\\x2A\\x26\\x73\\x74\\x61\\x5F\\x64\\x78\\x3D\\x2A\\x26"
                        "\\x73\\x74\\x61\\x5F\\x63\\x73\\x3D\\x2A\\x26\\x73\\x74\\x61\\x5F\\x66\\x74\\x3D"
                        "\\x2A\\x26\\x73\\x74\\x61\\x5F\\x63\\x74\\x3D\\x2A\\x26\\x73\\x74\\x61\\x5F\\x6D"
                        "\\x74\\x3D\\x2A\\x26\\x66\\x6D\\x32\\x3D\\x2A\\x26\\x63\\x74\\x69\\x6D\\x65\\x3D"
                        "\\x2A\\x26\\x6D\\x74\\x69\\x6D\\x65\\x3D\\x2A\\x26\\x72\\x65\\x73\\x76\\x30\\x3D"
                        "\\x2A\\x26\\x72\\x65\\x73\\x76\\x31\\x3D\\x2A\\x26\\x76\\x75\\x6B\\x3D\\x2A\\x26"
                        "\\x69\\x76\\x3D\\x2A\\x26\\x70\\x6B\\x65\\x79\\x3D\\x2A\\x26\\x72\\x74\\x3D\\x2A"
                        "\\x26\\x72\\x3D\\x2A\\x26\\x66\\x69\\x6E\\x3D\\x2A\\x26\\x64\\x70\\x2D\\x6C\\x6F"
                        "\\x67\\x69\\x64\\x3D\\x2A\\x26\\x63\\x73\\x69\\x67\\x6E\\x3D\\x2A\\x26\\x75\\x63"
                        "\\x3D\\x2A\\x26\\x74\\x69\\x3D\\x2A\\x7C\\x47\\x54\\x21\\x68\\x74\\x74\\x70\\x73"
                        "\\x3A\\x2F\\x2F\\x68\\x69\\x74\\x66\\x69\\x6C\\x65\\x2E\\x6E\\x65\\x74\\x2F\\x64"
                        "\\x6F\\x77\\x6E\\x6C\\x6F\\x61\\x64\\x2F\\x72\\x65\\x64\\x69\\x72\\x65\\x63\\x74"
                        "\\x2F\\x2A\\x2F\\x2A\\x7C\\x53\\x21\\x68\\x74\\x74\\x70\\x3A\\x2F\\x2F\\x73\\x2A"
                        "\\x2E\\x68\\x69\\x74\\x66\\x69\\x6C\\x65\\x2E\\x6E\\x65\\x74\\x2F\\x64\\x6F\\x77"
                        "\\x6E\\x6C\\x6F\\x61\\x64\\x2E\\x70\\x68\\x70\\x3F\\x6E\\x61\\x6D\\x65\\x3D\\x3C"
                        "\\x46\\x3A\\x2A\\x3E\\x26\\x6D\\x64\\x35\\x3D\\x2A\\x26\\x66\\x69\\x64\\x3D\\x2A"
                        "\\x26\\x75\\x69\\x64\\x3D\\x66\\x72\\x65\\x65\\x26\\x2A\\x74\\x72\\x79\\x63\\x6F"
                        "\\x75\\x6E\\x74\\x3D\\x31\\x26\\x2A\\x69\\x70\\x3D\\x2A\\x26\\x73\\x69\\x64\\x3D"
                        "\\x2A\\x26\\x62\\x72\\x6F\\x77\\x73\\x65\\x72\\x3D\\x2A\\x26\\x64\\x69\\x64\\x3D"
                        "\\x2A\\x26\\x73\\x69\\x67\\x6E\\x3D\\x2A\\x7C\\x68\\x74\\x74\\x70\\x3A\\x2F\\x2F"
                        "\\x64\\x6C\\x77\\x2A\\x2D\\x2A\\x2E\\x73\\x68\\x61\\x72\\x65\\x2D\\x6F\\x6E\\x6C"
                        "\\x69\\x6E\\x65\\x2E\\x62\\x69\\x7A\\x2F\\x66\\x6C\\x3F\\x66\\x72\\x3D\\x2A\\x26"
                        "\\x71\\x3D\\x76\\x34\\x7C\\x68\\x74\\x74\\x70\\x73\\x3A\\x2F\\x2F\\x64\\x6C\\x77"
                        "\\x2A\\x2D\\x2A\\x2E\\x73\\x68\\x61\\x72\\x65\\x2D\\x6F\\x6E\\x6C\\x69\\x6E\\x65"
                        "\\x2E\\x62\\x69\\x7A\\x2F\\x64\\x6C\\x3F\\x75\\x3D\\x26\\x71\\x3D\\x76\\x34\\x7C"
                        "\\x54\\x21\\x68\\x74\\x74\\x70\\x73\\x3A\\x2F\\x2F\\x68\\x69\\x6E\\x6F\\x6D\\x65"
                        "\\x74\\x72\\x70\\x6F\\x74\\x2E\\x63\\x6F\\x6D\\x2F\\x2A\\x2F\\x2A\\x7C\\x54\\x21"
                        "\\x68\\x74\\x74\\x70\\x73\\x3A\\x2F\\x2F\\x66\\x6F\\x72\\x65\\x67\\x72\\x6F\\x75"
                        "\\x6E\\x64\\x6D\\x61\\x73\\x74\\x65\\x72\\x2E\\x63\\x6F\\x6D\\x2F\\x2A\\x2F\\x2A"
                        "\\x7C\\x54\\x21\\x68\\x74\\x74\\x70\\x73\\x3A\\x2F\\x2F\\x73\\x74\\x61\\x74\\x69"
                        "\\x63\\x2E\\x63\\x6F\\x77\\x74\\x72\\x61\\x6E\\x73\\x66\\x65\\x72\\x2E\\x63\\x6F"
                        "\\x6D\\x2F\\x2A\\x2F\\x2A\\x2D\\x2A\\x2D\\x2A\\x2D\\x2A\\x2D\\x2A\\x2F\\x2A\\x3F"
                        "\\x6F\\x6E\\x65\\x74\\x74\\x3D\\x2A\\x26\\x61\\x74\\x74\\x6E\\x61\\x6D\\x65\\x3D"
                        "\\x2A\\x7C\\x54\\x21\\x68\\x74\\x74\\x70\\x3A\\x2F\\x2F\\x35\\x31\\x2E\\x31\\x35"
                        "\\x2E\\x31\\x36\\x35\\x2E\\x31\\x36\\x39\\x2F\\x6B\\x61\\x72\\x61\\x6E\\x70\\x63"
                        "\\x2E\\x63\\x6F\\x6D\\x2F\\x63\\x6C\\x6F\\x75\\x64\\x2F\\x2A\\x3F\\x6D\\x64\\x35"
                        "\\x3D\\x2A\\x26\\x65\\x78\\x70\\x69\\x72\\x65\\x73\\x3D\\x2A\\x7C\\x50\\x21\\x68"
                        "\\x74\\x74\\x70\\x73\\x3A\\x2F\\x2F\\x77\\x77\\x77\\x2E\\x66\\x69\\x6C\\x65\\x64"
                        "\\x72\\x6F\\x70\\x70\\x65\\x72\\x2E\\x63\\x6F\\x6D\\x2F\\x70\\x72\\x6F\\x63\\x65"
                        "\\x73\\x73\\x69\\x6E\\x67\\x2F\\x66\\x69\\x6C\\x65\\x64\\x6F\\x77\\x6E\\x6C\\x6F"
                        "\\x61\\x64\\x2E\\x70\\x68\\x70\\x3F\\x69\\x64\\x3D\\x2A\\x7C\\x68\\x74\\x74\\x70"
                        "\\x3A\\x2F\\x2F\\x73\\x30\\x30\\x30\\x2E\\x74\\x69\\x6E\\x79\\x75\\x70\\x6C\\x6F"
                        "\\x61\\x64\\x2E\\x63\\x6F\\x6D\\x2F\\x64\\x6F\\x77\\x6E\\x6C\\x6F\\x61\\x64\\x2E"
                        "\\x70\\x68\\x70\\x3F\\x66\\x69\\x6C\\x65\\x5F\\x69\\x64\\x3D\\x2A\\x26\\x74\\x3D"
                        "\\x2A\\x7C\\x47\\x21\\x68\\x74\\x74\\x70\\x73\\x3A\\x2F\\x2F\\x77\\x77\\x77\\x2E"
                        "\\x66\\x69\\x6C\\x65\\x34\\x2E\\x6E\\x65\\x74\\x2F\\x64\\x6F\\x77\\x6E\\x3F\\x69"
                        "\\x3D\\x2A\\x26\\x61\\x62\\x3D\\x2A\\x7C\\x47\\x21\\x68\\x74\\x74\\x70\\x3A\\x2F"
                        "\\x2F\\x67\\x2A\\x2E\\x67\\x69\\x67\\x61\\x70\\x65\\x74\\x61\\x2E\\x63\\x6F\\x6D"
                        "\\x2F\\x64\\x6F\\x77\\x6E\\x6C\\x6F\\x61\\x64\\x3F\\x2A\\x2F\\x2A\\x2E\\x2A\\x7C"
                        "\\x47\\x23\\x50\\x44\\x46\\x21\\x68\\x74\\x74\\x70\\x3A\\x2F\\x2F\\x63\\x69\\x74"
                        "\\x65\\x73\\x65\\x65\\x72\\x2A\\x2E\\x69\\x73\\x74\\x2E\\x70\\x73\\x75\\x2E\\x65"
                        "\\x64\\x75\\x2F\\x76\\x69\\x65\\x77\\x64\\x6F\\x63\\x2F\\x64\\x6F\\x77\\x6E\\x6C"
                        "\\x6F\\x61\\x64\\x3F\\x64\\x6F\\x69\\x3D\\x2A\\x26\\x74\\x79\\x70\\x65\\x3D\\x70"
                        "\\x64\\x66\\x7C\\x47\\x23\\x50\\x44\\x46\\x21\\x68\\x74\\x74\\x70\\x3A\\x2F\\x2F"
                        "\\x63\\x69\\x74\\x65\\x73\\x65\\x65\\x72\\x2A\\x2E\\x69\\x73\\x74\\x2E\\x70\\x73"
                        "\\x75\\x2E\\x65\\x64\\x75\\x2F\\x76\\x69\\x65\\x77\\x64\\x6F\\x63\\x2F\\x64\\x6F"
                        "\\x77\\x6E\\x6C\\x6F\\x61\\x64\\x3B\\x6A\\x73\\x65\\x73\\x73\\x69\\x6F\\x6E\\x69"
                        "\\x64\\x3D\\x2A\\x3F\\x64\\x6F\\x69\\x3D\\x2A\\x26\\x74\\x79\\x70\\x65\\x3D\\x70"
                        "\\x64\\x66\\x7C\\x47\\x54\\x21\\x68\\x74\\x74\\x70\\x73\\x3A\\x2F\\x2F\\x37\\x36"
                        "\\x66\\x61\\x6C\\x6C\\x6F\\x75\\x74\\x2E\\x63\\x6F\\x6D\\x2F\\x2A\\x2F\\x2A\\x2E"
                        "\\x7A\\x69\\x70\\x7C\\x47\\x54\\x21\\x68\\x74\\x74\\x70\\x73\\x3A\\x2F\\x2F\\x64"
                        "\\x6C\\x2A\\x2E\\x73\\x61\\x76\\x65\\x6D\\x65\\x64\\x69\\x61\\x2E\\x77\\x65\\x62"
                        "\\x73\\x69\\x74\\x65\\x2F\\x73\\x65\\x63\\x75\\x72\\x65\\x2F\\x2A\\x2E\\x6D\\x70"
                        "\\x33\\x3F\\x6D\\x64\\x35\\x3D\\x2A\\x26\\x74\\x69\\x74\\x6C\\x65\\x3D\\x2A\\x7C"
                        "\\x47\\x21\\x68\\x74\\x74\\x70\\x73\\x3A\\x2F\\x2F\\x77\\x77\\x77\\x2E\\x64\\x72"
                        "\\x6F\\x69\\x64\\x6D\\x69\\x72\\x72\\x6F\\x72\\x2E\\x63\\x6F\\x6D\\x2F\\x73\\x61"
                        "\\x76\\x65\\x5F\\x66\\x69\\x6C\\x65\\x2F\\x3F\\x74\\x6F\\x6B\\x65\\x6E\\x3D\\x2A"
                        "\\x7C\\x47\\x21\\x68\\x74\\x74\\x70\\x73\\x3A\\x2F\\x2F\\x79\\x74\\x63\\x6F\\x6E"
                        "\\x76\\x65\\x72\\x74\\x2A\\x2E\\x76\\x6E\\x61\\x64\\x69\\x67\\x69\\x74\\x61\\x6C"
                        "\\x2E\\x63\\x6F\\x6D\\x2F\\x64\\x6F\\x77\\x6E\\x6C\\x6F\\x61\\x64\\x2F\\x2A\\x2F"
                        "\\x2A\\x7C\\x47\\x21\\x68\\x74\\x74\\x70\\x73\\x3A\\x2F\\x2F\\x64\\x6C\\x2E\\x64"
                        "\\x6F\\x77\\x6E\\x6D\\x69\\x65\\x6E\\x70\\x68\\x69\\x2E\\x6E\\x65\\x74\\x2F\\x2A"
                        "\\x3F\\x64\\x6F\\x77\\x6E\\x6C\\x6F\\x61\\x64\\x5F\\x74\\x6F\\x6B\\x65\\x6E\\x3D"
                        "\\x2A\\x7C\\x50\\x21\\x68\\x74\\x74\\x70\\x73\\x3A\\x2F\\x2F\\x77\\x77\\x77\\x2E"
                        "\\x6E\\x6F\\x64\\x65\\x76\\x69\\x63\\x65\\x2E\\x63\\x6F\\x6D\\x2E\\x70\\x74\\x2F"
                        "\\x2A\\x2F\\x64\\x6F\\x77\\x6E\\x6C\\x6F\\x61\\x64\\x7C\\x50\\x21\\x68\\x74\\x74"
                        "\\x70\\x3A\\x2F\\x2F\\x77\\x77\\x77\\x2E\\x79\\x6F\\x75\\x72\\x66\\x69\\x6C\\x65"
                        "\\x6C\\x69\\x6E\\x6B\\x2E\\x63\\x6F\\x6D\\x2F\\x75\\x73\\x65\\x72\\x66\\x69\\x6C"
                        "\\x65\\x73\\x2F\\x64\\x69\\x72\\x65\\x63\\x74\\x2E\\x70\\x68\\x70\\x7C\\x53\\x23"
                        "\\x50\\x44\\x46\\x21\\x68\\x74\\x74\\x70\\x73\\x3A\\x2F\\x2F\\x77\\x77\\x77\\x2E"
                        "\\x63\\x61\\x69\\x72\\x6E\\x2E\\x69\\x6E\\x66\\x6F\\x2F\\x69\\x6E\\x64\\x65\\x78"
                        "\\x2E\\x70\\x68\\x70\\x3F\\x63\\x6F\\x6E\\x74\\x72\\x6F\\x6C\\x65\\x75\\x72\\x3D"
                        "\\x2A\\x26\\x61\\x63\\x74\\x69\\x6F\\x6E\\x3D\\x6C\\x6F\\x61\\x64\\x50\\x64\\x66"
                        "\\x4F\\x75\\x76\\x72\\x61\\x67\\x65\\x2A\\x26\\x70\\x64\\x66\\x54\\x6F\\x6B\\x65"
                        "\\x6E\\x3D\\x2A\\x7C\\x47\\x23\\x50\\x44\\x46\\x21\\x68\\x74\\x74\\x70\\x73\\x3A"
                        "\\x2F\\x2F\\x65\\x61\\x61\\x64\\x68\\x61\\x61\\x72\\x2E\\x75\\x69\\x64\\x61\\x69"
                        "\\x2E\\x67\\x6F\\x76\\x2E\\x69\\x6E\\x2F\\x64\\x6F\\x77\\x6E\\x6C\\x6F\\x61\\x64"
                        "\\x50\\x64\\x66\\x7C\\x47\\x23\\x50\\x44\\x46\\x21\\x68\\x74\\x74\\x70\\x73\\x3A"
                        "\\x2F\\x2F\\x2A\\x2E\\x75\\x69\\x64\\x61\\x69\\x2E\\x67\\x6F\\x76\\x2E\\x69\\x6E"
                        "\\x2F\\x2A\\x2F\\x64\\x6F\\x77\\x6E\\x6C\\x6F\\x61\\x64\\x50\\x64\\x66\\x7C\\x54"
                        "\\x21\\x68\\x74\\x74\\x70\\x3A\\x2F\\x2F\\x73\\x2A\\x2E\\x6E\\x69\\x74\\x72\\x6F"
                        "\\x66\\x6C\\x61\\x72\\x65\\x2E\\x63\\x6F\\x6D\\x2F\\x64\\x2F\\x2A\\x2F\\x3C\\x46"
                        "\\x3A\\x2A\\x3E\\x7C\\x54\\x21\\x68\\x74\\x74\\x70\\x3A\\x2F\\x2F\\x64\\x6F\\x77"
                        "\\x6E\\x6C\\x6F\\x61\\x64\\x2A\\x2E\\x66\\x73\\x68\\x61\\x72\\x65\\x2E\\x76\\x6E"
                        "\\x2F\\x64\\x6C\\x2F\\x2A\\x2F\\x3C\\x46\\x3A\\x2A\\x3E\\x7C\\x50\\x21\\x68\\x74"
                        "\\x74\\x70\\x73\\x3A\\x2F\\x2F\\x64\\x6F\\x77\\x6E\\x6C\\x6F\\x61\\x64\\x2E\\x73"
                        "\\x68\\x61\\x72\\x65\\x7A\\x2E\\x63\\x63\\x2F\\x3F\\x66\\x3D\\x2A\\x7C\\x47\\x54"
                        "\\x21\\x68\\x74\\x74\\x70\\x73\\x3A\\x2F\\x2F\\x77\\x77\\x77\\x2E\\x75\\x70\\x6C"
                        "\\x6F\\x61\\x64\\x2E\\x65\\x65\\x2F\\x64\\x6F\\x77\\x6E\\x6C\\x6F\\x61\\x64\\x2F"
                        "\\x2A\\x2F\\x2A\\x2F\\x3C\\x46\\x3A\\x2A\\x3E\\x7C\\x47\\x54\\x21\\x68\\x74\\x74"
                        "\\x70\\x3A\\x2F\\x2F\\x77\\x77\\x77\\x2A\\x2E\\x75\\x70\\x74\\x6F\\x62\\x6F\\x78"
                        "\\x2E\\x63\\x6F\\x6D\\x2F\\x64\\x6C\\x2F\\x2A\\x2F\\x3C\\x46\\x3A\\x2A\\x3E\\x3B\x00";
long WebSocketReceiveLen1   = sizeof(WebSocketReceive1) - 1;	 

 

char WebSocketReceive2[] = "\\x4D\\x53\\x47\\x23\\x33\\x23\\x31\\x38\\x23\\x31\\x23\\x30\\x3A\\x31\\x2C\\x31"
                        "\\x30\\x32\\x3D\\x31\\x38\\x3A\\x77\\x77\\x77\\x5C\\x2E\\x79\\x6F\\x75\\x74\\x75"
                        "\\x62\\x65\\x5C\\x2E\\x63\\x6F\\x6D\\x2F\\x2C\\x31\\x31\\x31\\x3D\\x31\\x36\\x3A"
                        "\\x5E\\x2F\\x76\\x69\\x64\\x65\\x6F\\x70\\x6C\\x61\\x79\\x62\\x61\\x63\\x6B\\x24"
                        "\\x2C\\x31\\x31\\x32\\x3D\\x31\\x37\\x3A\\x5E\\x2F\\x61\\x70\\x69\\x2F\\x74\\x69"
                        "\\x6D\\x65\\x64\\x74\\x65\\x78\\x74\\x5C\\x62\\x2C\\x31\\x31\\x34\\x3D\\x32\\x31"
                        "\\x3A\\x5E\\x2F\\x61\\x70\\x69\\x2F\\x6D\\x61\\x6E\\x69\\x66\\x65\\x73\\x74\\x2F"
                        "\\x64\\x61\\x73\\x68\\x5C\\x62\\x2C\\x31\\x30\\x31\\x3D\\x38\\x36\\x3A\\x7E\\x79"
                        "\\x6F\\x75\\x74\\x75\\x62\\x65\\x2E\\x63\\x6F\\x6D\\x7C\\x2A\\x2E\\x67\\x6F\\x6F"
                        "\\x67\\x6C\\x65\\x76\\x69\\x64\\x65\\x6F\\x2E\\x63\\x6F\\x6D\\x7C\\x64\\x72\\x69"
                        "\\x76\\x65\\x2E\\x67\\x6F\\x6F\\x67\\x6C\\x65\\x2E\\x63\\x6F\\x6D\\x7C\\x64\\x6F"
                        "\\x63\\x73\\x2E\\x67\\x6F\\x6F\\x67\\x6C\\x65\\x2E\\x63\\x6F\\x6D\\x7C\\x79\\x6F"
                        "\\x75\\x74\\x75\\x62\\x65\\x2E\\x67\\x6F\\x6F\\x67\\x6C\\x65\\x61\\x70\\x69\\x73"
                        "\\x2E\\x63\\x6F\\x6D\\x2C\\x31\\x31\\x35\\x3D\\x34\\x32\\x3A\\x5E\\x2F\\x77\\x61"
                        "\\x74\\x63\\x68\\x5C\\x3F\\x28\\x3F\\x3A\\x2E\\x2A\\x3F\\x26\\x29\\x3F\\x28\\x3F"
                        "\\x3A\\x70\\x62\\x6A\\x3D\\x31\\x7C\\x73\\x70\\x66\\x3D\\x6E\\x61\\x76\\x69\\x67"
                        "\\x61\\x74\\x65\\x29\\x5C\\x62\\x2C\\x31\\x31\\x33\\x3D\\x32\\x34\\x3A\\x2F\\x28"
                        "\\x3F\\x3A\\x67\\x65\\x74\\x7C\\x61\\x70\\x69\\x29\\x5F\\x76\\x69\\x64\\x65\\x6F"
                        "\\x5F\\x69\\x6E\\x66\\x6F\\x24\\x2C\\x31\\x31\\x36\\x3D\\x35\\x31\\x3A\\x28\\x3F"
                        "\\x3A\\x5C\\x62\\x79\\x74\\x70\\x6C\\x61\\x79\\x65\\x72\\x5C\\x2E\\x63\\x6F\\x6E"
                        "\\x66\\x69\\x67\\x5C\\x73\\x2A\\x3D\\x7C\\x27\\x50\\x4C\\x41\\x59\\x45\\x52\\x5F"
                        "\\x43\\x4F\\x4E\\x46\\x49\\x47\\x27\\x5C\\x73\\x2A\\x3A\\x29\\x5C\\x73\\x2A\\x5C"
                        "\\x7B\\x2C\\x31\\x31\\x37\\x3D\\x34\\x39\\x3A\\x2F\\x79\\x74\\x73\\x2F\\x6A\\x73"
                        "\\x62\\x69\\x6E\\x2F\\x70\\x6C\\x61\\x79\\x65\\x72\\x28\\x3F\\x3A\\x5F\\x5C\\x77"
                        "\\x2B\\x29\\x3F\\x2D\\x28\\x5B\\x5E\\x2F\\x5D\\x2B\\x29\\x2F\\x5C\\x77\\x2B\\x2F"
                        "\\x62\\x61\\x73\\x65\\x5C\\x2E\\x6A\\x73\\x5C\\x62\\x2C\\x31\\x31\\x39\\x3D\\x36"
                        "\\x34\\x3A\\x5C\\x62\\x76\\x61\\x72\\x5C\\x73\\x2B\\x5C\\x77\\x2B\\x3D\\x5C\\x73"
                        "\\x2A\\x28\\x5C\\x64\\x7B\\x34\\x2C\\x7D\\x29\\x3B\\x5B\\x5E\\x7B\\x7D\\x5D\\x2B"
                        "\\x5C\\x28\\x22\\x53\\x54\\x53\\x22\\x7C\\x5C\\x62\\x73\\x74\\x73\\x22\\x3F\\x5B"
                        "\\x3A\\x3D\\x5D\\x5C\\x73\\x2A\\x22\\x3F\\x28\\x5C\\x64\\x7B\\x34\\x2C\\x7D\\x29"
                        "\\x5C\\x62\\x2C\\x31\\x32\\x30\\x3D\\x31\\x30\\x33\\x3A\\x5C\\x62\\x5C\\x77\\x2B"
                        "\\x3D\\x66\\x75\\x6E\\x63\\x74\\x69\\x6F\\x6E\\x5C\\x28\\x28\\x5C\\x77\\x2B\\x29"
                        "\\x5C\\x29\\x5C\\x7B\\x5C\\x31\\x3D\\x5C\\x31\\x5C\\x2E\\x73\\x70\\x6C\\x69\\x74"
                        "\\x5C\\x28\\x22\\x22\\x5C\\x29\\x3B\\x5C\\x73\\x2A\\x28\\x5C\\x77\\x2B\\x29\\x28"
                        "\\x3F\\x3A\\x5C\\x32\\x3F\\x5C\\x2E\\x5C\\x77\\x2B\\x5C\\x28\\x5C\\x31\\x2C\\x5C"
                        "\\x64\\x2B\\x5C\\x29\\x3B\\x5C\\x73\\x2A\\x29\\x2B\\x72\\x65\\x74\\x75\\x72\\x6E"
                        "\\x5C\\x73\\x2B\\x5C\\x31\\x2E\\x6A\\x6F\\x69\\x6E\\x5C\\x28\\x22\\x22\\x5C\\x29"
                        "\\x5C\\x7D\\x2C\\x31\\x32\\x31\\x3D\\x31\\x31\\x36\\x3A\\x5C\\x62\\x28\\x5C\\x77"
                        "\\x2B\\x29\\x3D\\x5C\\x7B\\x28\\x3F\\x3A\\x5C\\x77\\x2B\\x3A\\x5C\\x73\\x2A\\x66"
                        "\\x75\\x6E\\x63\\x74\\x69\\x6F\\x6E\\x5C\\x28\\x5B\\x5C\\x77\\x2C\\x5D\\x2B\\x5C"
                        "\\x29\\x5C\\x7B\\x28\\x3F\\x3A\\x76\\x61\\x72\\x5C\\x73\\x2B\\x28\\x5C\\x77\\x2B"
                        "\\x29\\x3D\\x5B\\x5E\\x7B\\x7D\\x5D\\x2B\\x3D\\x5C\\x32\\x7C\\x5C\\x77\\x2B\\x5C"
                        "\\x2E\\x73\\x70\\x6C\\x69\\x63\\x65\\x5C\\x28\\x30\\x2C\\x5C\\x77\\x2B\\x5C\\x29"
                        "\\x7C\\x5C\\x77\\x2B\\x5C\\x2E\\x72\\x65\\x76\\x65\\x72\\x73\\x65\\x5C\\x28\\x5C"
                        "\\x29\\x29\\x5C\\x7D\\x2C\\x3F\\x5C\\x73\\x2A\\x29\\x7B\\x33\\x7D\\x5C\\x7D\\x2C"
                        "\\x31\\x32\\x32\\x3D\\x31\\x38\\x3A\\x79\\x74\\x2D\\x6E\\x65\\x74\\x77\\x6F\\x72"
                        "\\x6B\\x2D\\x6D\\x61\\x6E\\x61\\x67\\x65\\x72\\x2C\\x31\\x31\\x38\\x3D\\x31\\x34"
                        "\\x33\\x3A\\x31\\x38\\x32\\x37\\x37\\x3A\\x76\\x66\\x6C\\x4E\\x37\\x47\\x45\\x51"
                        "\\x33\\x7C\\x31\\x38\\x32\\x39\\x30\\x3A\\x76\\x66\\x6C\\x31\\x47\\x70\\x43\\x62"
                        "\\x6D\\x7C\\x31\\x38\\x33\\x30\\x35\\x3A\\x76\\x66\\x6C\\x70\\x35\\x66\\x50\\x6E"
                        "\\x30\\x7C\\x31\\x38\\x33\\x32\\x34\\x3A\\x76\\x66\\x6C\\x65\\x34\\x61\\x39\\x61"
                        "\\x61\\x7C\\x31\\x38\\x33\\x33\\x32\\x3A\\x76\\x66\\x6C\\x51\\x4A\\x5F\\x6F\\x48"
                        "\\x33\\x7C\\x31\\x38\\x33\\x33\\x38\\x3A\\x76\\x66\\x6C\\x53\\x42\\x54\\x6C\\x69"
                        "\\x76\\x7C\\x31\\x38\\x33\\x34\\x30\\x3A\\x76\\x66\\x6C\\x45\\x4F\\x32\\x48\\x38"
                        "\\x52\\x7C\\x31\\x38\\x33\\x35\\x32\\x3A\\x76\\x66\\x6C\\x42\\x41\\x4E\\x31\\x79"
                        "\\x30\\x7C\\x31\\x38\\x33\\x35\\x34\\x3A\\x76\\x66\\x6C\\x36\\x4D\\x55\\x78\\x4B"
                        "\\x37\\x3B\x00";
long WebSocketReceiveLen2   = sizeof(WebSocketReceive2) - 1;	 


# 9 "globals.h" 2


 
 


# 3 "c:\\users\\elder\\desktop\\testrun\\\\combined_testrun.c" 2

# 1 "vuser_init.c" 1
vuser_init()
{
	return 0;
}
# 4 "c:\\users\\elder\\desktop\\testrun\\\\combined_testrun.c" 2

# 1 "Action.c" 1
Action()
{

	web_websocket_send("ID=0", 
		"Buffer/Bin="
		"\\x4D\\x53\\x47\\x23\\x31\\x23\\x32\\x23\\x31\\x23\\x31\\x30\\x32\\x34\\x3A\\x31\\x32\\x3A\\x33\\x33\\x3A\\x31\\x30\\x33\\x31\\x3A\\x30\\x2C\\x31\\x31\\x32\\x3D\\x32\\x30\\x3A\\x43\\x68\\x72\\x6F\\x6D\\x65\\x2F\\x38\\x34\\x2E\\x30\\x2E\\x34\\x31\\x34\\x37\\x2E\\x31\\x30\\x35\\x2C\\x31\\x31\\x33\\x3D\\x32\\x30\\x3A\\x43\\x68\\x72\\x6F\\x6D\\x65\\x2F\\x38\\x34\\x2E\\x30\\x2E\\x34\\x31\\x34\\x37\\x2E\\x31\\x30\\x35\\x2C\\x31\\x31\\x34\\x3D\\x32\\x37\\x3A\\x43\\x68\\x72\\x6F\\x6D\\x65\\x5F\\x52\\x65\\"
		"x6E\\x64\\x65\\x72\\x57\\x69\\x64\\x67\\x65\\x74\\x48\\x6F\\x73\\x74\\x48\\x57\\x4E\\x44\\x2C\\x31\\x31\\x36\\x3D\\x35\\x3A\\x65\\x6E\\x2D\\x55\\x53\\x3B", 
		"IsBinary=1", 
		"LAST");

	 

	 

	 

	web_set_sockets_option("SSL_VERSION", "AUTO");

	 

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("www.google.com", 
		"URL=http://www.google.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=https://www.google.com/images/branding/googlelogo/1x/googlelogo_color_272x92dp.png", "Referer=https://www.google.com/", "ENDITEM", 
		"LAST");

	web_add_header("Sec-Fetch-Site", 
		"same-site");

	web_add_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("Origin", 
		"https://www.google.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	lr_think_time(12);

	web_custom_request("log", 
		"URL=https://play.google.com/log?format=json&hasfast=true", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.google.com/", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded;charset=UTF-8", 
		"Body=[[1,null,null,null,null,null,null,null,null,null,[null,null,null,null,\"en-NG\"]],373,[[\"1596569594308\",null,[],null,null,null,null,\"[98,40400,1,1,\\\"323282162.0\\\",\\\"67cpX-vRB6-VlwTzx5jgCA\\\",null,null,null,\\\"en\\\",\\\"NGA\\\",0,1,31249,null,false,false,null,\\\"og-0f991575-7b03-4fec-b0a5-f96f9c04410e\\\",null,null,null,null,null,true,false,null,null,null,null,null,null,null,null,null,null,null,1,null,[\\\"pa`2`2\\\",\\\"Error: pa`2`2\\\\n    at _.$q.<anonymous> (https://"
		"www.google.com/?gws_rd=ssl:315:236)\\\",null,null,1]]\",null,null,null,null,null,null,null,[null,[],null,\"[[],[],[3700746,3700817],[]]\"],null,null,null,[],1,null,null,null,null,null,[]]],\"1596569595310\",[],null,null,null,null,null,null,null,null,0]", 
		"LAST");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("checkin", 
		"URL=https://android.clients.google.com/checkin", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/x-protobuffer", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		"EncType=application/x-protobuf", 
		"BodyBinary=\\x10\\x88\\xE8\\xD0\\xFA\\xE5\\xB7\\xFB\\x92A\\x1A*1-36c1cff674703e377af9e0ecd2a1cc4c51acdecf\"\\x17`\\x03j\\x13\\x08\\x01\\x12\r84.0.4147.105\\x18\\x01i?3G.\\\\\\xF9\\x88%p\\x03\\xB0\\x01\\x00", 
		"LAST");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-Site", 
		"same-site");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("mail", 
		"URL=https://mail.google.com/mail/?tab=wm&ogbl", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.google.com/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"LAST");

	lr_think_time(14);

	web_websocket_close("ID=0", 
		"Code=1001", 
		"LAST");

	return 0;
}
# 5 "c:\\users\\elder\\desktop\\testrun\\\\combined_testrun.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
	return 0;
}
# 6 "c:\\users\\elder\\desktop\\testrun\\\\combined_testrun.c" 2

