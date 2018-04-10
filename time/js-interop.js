mergeInto(LibraryManager.library, {
    time_reported: function(hours, minutes, seconds) {
        function format(num) {
            return '' + (num < 10 ? '0' : '') + num;
        }
        document.getElementById('time').innerHTML +=
            'Time is: ' + format(hours) + ':' + format(minutes) + ':' + format(seconds) + '<br>';
    }
});