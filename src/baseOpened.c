/* Y o u r   D e s c r i p t i o n                       */
/*                            AppBuilder Photon Code Lib */
/*                                         Version 2.03  */

/* Standard headers */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <time.h>

/* Local headers */
#include "ablibs.h"
#include "abimport.h"
#include "proto.h"


int
baseOpened( PtWidget_t *widget, ApInfo_t *apinfo, PtCallbackInfo_t *cbinfo )

	{
	/* eliminate 'unreferenced' warnings */
	widget = widget, apinfo = apinfo, cbinfo = cbinfo;

	srand(time(NULL));

	return( Pt_CONTINUE );

	}
